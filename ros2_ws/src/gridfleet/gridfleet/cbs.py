from __future__ import annotations

from collections import deque
import heapq
from itertools import count
from .grid_map import GridMap
from .models import Position, Robot
from dataclasses import dataclass, field
from .conflict_detection import (
    EdgeConflict,
    VertexConflict,
    detect_all_conflicts,
)


@dataclass(frozen=True, slots=True)
class VertexConstraint:
    robot_id: str
    position: Position
    time_step: int


@dataclass(frozen=True, slots=True)
class EdgeConstraint:
    robot_id: str
    from_pos: Position
    to_pos: Position
    time_step: int


@dataclass(frozen=True, slots=True)
class TimedState:
    position: Position
    time_step: int


def reconstruct_timed_path(
    came_from: dict[TimedState, TimedState | None],
    goal_state: TimedState,
) -> list[Position]:
    path: list[Position] = []
    current: TimedState | None = goal_state

    while current is not None:
        path.append(current.position)
        current = came_from[current]

    path.reverse()
    return path


def violates_vertex_constraint(
    robot_id: str,
    position: Position,
    time_step: int,
    constraints: list[VertexConstraint],
) -> bool:
    return any(
        constraint.robot_id == robot_id
        and constraint.position == position
        and constraint.time_step == time_step
        for constraint in constraints
    )


def violates_edge_constraint(
    robot_id: str,
    from_pos: Position,
    to_pos: Position,
    time_step: int,
    constraints: list[EdgeConstraint],
) -> bool:
    return any(
        constraint.robot_id == robot_id
        and constraint.from_pos == from_pos
        and constraint.to_pos == to_pos
        and constraint.time_step == time_step
        for constraint in constraints
    )


def constrained_bfs_plan(
    grid: GridMap,
    robot: Robot,
    vertex_constraints: list[VertexConstraint] | None = None,
    edge_constraints: list[EdgeConstraint] | None = None,
    max_time: int = 50,
) -> list[Position]:
    vertex_constraints = vertex_constraints or []
    edge_constraints = edge_constraints or []

    if not grid.is_free(robot.position):
        raise ValueError(f"Start position is not free for {robot.robot_id}.")
    if not grid.is_free(robot.goal):
        raise ValueError(f"Goal position is not free for {robot.robot_id}.")

    start_state = TimedState(robot.position, 0)

    if violates_vertex_constraint(
        robot.robot_id,
        start_state.position,
        start_state.time_step,
        vertex_constraints,
    ):
        return []

    frontier = deque([start_state])
    came_from: dict[TimedState, TimedState | None] = {start_state: None}

    while frontier:
        current = frontier.popleft()

        if current.position == robot.goal:
            return reconstruct_timed_path(came_from, current)

        if current.time_step >= max_time:
            continue

        next_time = current.time_step + 1

        for next_pos in grid.neighbors_with_wait(current.position):
            next_state = TimedState(next_pos, next_time)

            if next_state in came_from:
                continue

            if violates_vertex_constraint(
                robot.robot_id,
                next_pos,
                next_time,
                vertex_constraints,
            ):
                continue

            if violates_edge_constraint(
                robot.robot_id,
                current.position,
                next_pos,
                current.time_step,
                edge_constraints,
            ):
                continue

            came_from[next_state] = current
            frontier.append(next_state)

    return []


@dataclass(slots=True)
class CBSTreeNode:
    vertex_constraints: list[VertexConstraint] = field(default_factory=list)
    edge_constraints: list[EdgeConstraint] = field(default_factory=list)
    paths: dict[str, list[Position]] = field(default_factory=dict)
    cost: int = 0


def compute_solution_cost(paths: dict[str, list[Position]]) -> int:
    return sum(len(path) for path in paths.values())


def plan_paths_for_all_robots(
    grid: GridMap,
    robots: list[Robot],
    vertex_constraints: list[VertexConstraint] | None = None,
    edge_constraints: list[EdgeConstraint] | None = None,
    max_time: int = 50,
) -> dict[str, list[Position]]:
    paths: dict[str, list[Position]] = {}

    for robot in robots:
        path = constrained_bfs_plan(
            grid=grid,
            robot=robot,
            vertex_constraints=vertex_constraints,
            edge_constraints=edge_constraints,
            max_time=max_time,
        )

        if not path:
            raise RuntimeError(f"No path found for {robot.robot_id}")

        paths[robot.robot_id] = path

    return paths


# TODO think how to refactor this so that there is no need to create Robot objects all the time.
def build_robots_from_paths(
    robots: list[Robot],
    paths: dict[str, list[Position]],
) -> list[Robot]:
    robot_lookup = {robot.robot_id: robot for robot in robots}
    rebuilt_robots: list[Robot] = []

    for robot_id, path in paths.items():
        original = robot_lookup[robot_id]
        rebuilt_robots.append(
            Robot(
                robot_id=original.robot_id,
                position=original.position,
                goal=original.goal,
                path=path.copy(),
            )
        )

    return rebuilt_robots


def get_first_conflict(
    robots: list[Robot],
) -> VertexConflict | EdgeConflict | None:
    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    if vertex_conflicts:
        return vertex_conflicts[0]

    if edge_conflicts:
        return edge_conflicts[0]

    return None


def build_root_cbs_node(
    grid: GridMap,
    robots: list[Robot],
    max_time: int = 50,
) -> tuple[CBSTreeNode, VertexConflict | EdgeConflict | None]:
    paths = plan_paths_for_all_robots(
        grid=grid,
        robots=robots,
        vertex_constraints=[],
        edge_constraints=[],
        max_time=max_time,
    )

    cost = compute_solution_cost(paths)

    robots_with_paths = build_robots_from_paths(robots, paths)
    first_conflict = get_first_conflict(robots_with_paths)

    root = CBSTreeNode(
        vertex_constraints=[],
        edge_constraints=[],
        paths=paths,
        cost=cost,
    )

    return root, first_conflict


def get_robot_by_id(robots: list[Robot], robot_id: str) -> Robot:
    for robot in robots:
        if robot.robot_id == robot_id:
            return robot
    raise ValueError(f"Robot with id {robot_id} not found.")


def get_vertex_constraints_for_robot(
    robot_id: str,
    constraints: list[VertexConstraint],
) -> list[VertexConstraint]:
    return [
        constraint
        for constraint in constraints
        if constraint.robot_id == robot_id
    ]


def get_edge_constraints_for_robot(
    robot_id: str,
    constraints: list[EdgeConstraint],
) -> list[EdgeConstraint]:
    return [
        constraint
        for constraint in constraints
        if constraint.robot_id == robot_id
    ]


def build_child_node_with_replan(
    parent: CBSTreeNode,
    grid: GridMap,
    robots: list[Robot],
    replanned_robot_id: str,
    new_vertex_constraint: VertexConstraint | None = None,
    new_edge_constraint: EdgeConstraint | None = None,
    max_time: int = 50,
) -> CBSTreeNode | None:
    child_vertex_constraints = parent.vertex_constraints.copy()
    child_edge_constraints = parent.edge_constraints.copy()

    if new_vertex_constraint is not None:
        child_vertex_constraints.append(new_vertex_constraint)

    if new_edge_constraint is not None:
        child_edge_constraints.append(new_edge_constraint)

    child_paths = {
        robot_id: path.copy()
        for robot_id, path in parent.paths.items()
    }

    robot = get_robot_by_id(robots, replanned_robot_id)

    robot_vertex_constraints = get_vertex_constraints_for_robot(
        replanned_robot_id,
        child_vertex_constraints,
    )
    robot_edge_constraints = get_edge_constraints_for_robot(
        replanned_robot_id,
        child_edge_constraints,
    )

    new_path = constrained_bfs_plan(
        grid=grid,
        robot=robot,
        vertex_constraints=robot_vertex_constraints,
        edge_constraints=robot_edge_constraints,
        max_time=max_time,
    )

    if not new_path:
        return None

    child_paths[replanned_robot_id] = new_path

    return CBSTreeNode(
        vertex_constraints=child_vertex_constraints,
        edge_constraints=child_edge_constraints,
        paths=child_paths,
        cost=compute_solution_cost(child_paths),
    )


def branch_on_vertex_conflict(
    parent: CBSTreeNode,
    conflict: VertexConflict,
    grid: GridMap,
    robots: list[Robot],
    max_time: int = 50,
) -> list[CBSTreeNode]:
    child_nodes: list[CBSTreeNode] = []

    constraint_a = VertexConstraint(
        robot_id=conflict.robot_a,
        position=conflict.position,
        time_step=conflict.time_step,
    )
    child_a = build_child_node_with_replan(
        parent=parent,
        grid=grid,
        robots=robots,
        replanned_robot_id=conflict.robot_a,
        new_vertex_constraint=constraint_a,
        max_time=max_time,
    )
    if child_a is not None:
        child_nodes.append(child_a)

    constraint_b = VertexConstraint(
        robot_id=conflict.robot_b,
        position=conflict.position,
        time_step=conflict.time_step,
    )
    child_b = build_child_node_with_replan(
        parent=parent,
        grid=grid,
        robots=robots,
        replanned_robot_id=conflict.robot_b,
        new_vertex_constraint=constraint_b,
        max_time=max_time,
    )
    if child_b is not None:
        child_nodes.append(child_b)

    return child_nodes


def branch_on_edge_conflict(
    parent: CBSTreeNode,
    conflict: EdgeConflict,
    grid: GridMap,
    robots: list[Robot],
    max_time: int = 50,
) -> list[CBSTreeNode]:
    child_nodes: list[CBSTreeNode] = []

    constraint_a = EdgeConstraint(
        robot_id=conflict.robot_a,
        from_pos=conflict.from_a,
        to_pos=conflict.to_a,
        time_step=conflict.time_step,
    )
    child_a = build_child_node_with_replan(
        parent=parent,
        grid=grid,
        robots=robots,
        replanned_robot_id=conflict.robot_a,
        new_edge_constraint=constraint_a,
        max_time=max_time,
    )
    if child_a is not None:
        child_nodes.append(child_a)

    constraint_b = EdgeConstraint(
        robot_id=conflict.robot_b,
        from_pos=conflict.from_b,
        to_pos=conflict.to_b,
        time_step=conflict.time_step,
    )
    child_b = build_child_node_with_replan(
        parent=parent,
        grid=grid,
        robots=robots,
        replanned_robot_id=conflict.robot_b,
        new_edge_constraint=constraint_b,
        max_time=max_time,
    )
    if child_b is not None:
        child_nodes.append(child_b)

    return child_nodes


def branch_on_conflict(
    parent: CBSTreeNode,
    conflict: VertexConflict | EdgeConflict,
    grid: GridMap,
    robots: list[Robot],
    max_time: int = 50,
) -> list[CBSTreeNode]:
    if isinstance(conflict, VertexConflict):
        return branch_on_vertex_conflict(
            parent=parent,
            conflict=conflict,
            grid=grid,
            robots=robots,
            max_time=max_time,
        )

    return branch_on_edge_conflict(
        parent=parent,
        conflict=conflict,
        grid=grid,
        robots=robots,
        max_time=max_time,
    )


# TODO do I really need this function? It seems redundand.
def get_first_conflict_in_node(
    node: CBSTreeNode,
    robots: list[Robot],
) -> VertexConflict | EdgeConflict | None:
    robots_with_paths = build_robots_from_paths(robots, node.paths)
    return get_first_conflict(robots_with_paths)


def cbs_solve(
    grid: GridMap,
    robots: list[Robot],
    max_time: int = 50,
    max_high_level_expansions: int = 1000,
) -> dict[str, list[Position]]:
    root, first_conflict = build_root_cbs_node(
        grid=grid,
        robots=robots,
        max_time=max_time,
    )

    if first_conflict is None:
        return root.paths

    # the tuple is cost, tie breaker, node
    open_list: list[tuple[int, int, CBSTreeNode]] = []
    tie_breaker = count()

    heapq.heappush(
        open_list,
        (root.cost, next(tie_breaker), root),
    )

    expansions = 0

    while open_list:
        _, _, current = heapq.heappop(open_list)
        expansions += 1

        if expansions > max_high_level_expansions:
            raise RuntimeError("CBS exceeded max high-level expansions.")

        conflict = get_first_conflict_in_node(current, robots)

        if conflict is None:
            return current.paths

        children = branch_on_conflict(
            parent=current,
            conflict=conflict,
            grid=grid,
            robots=robots,
            max_time=max_time,
        )

        for child in children:
            heapq.heappush(
                open_list,
                (child.cost, next(tie_breaker), child),
            )

    raise RuntimeError("CBS failed to find a conflict-free solution.")


def assign_paths_to_robots(
    robots: list[Robot],
    paths: dict[str, list[Position]],
) -> None:
    for robot in robots:
        robot.path = paths[robot.robot_id].copy()
