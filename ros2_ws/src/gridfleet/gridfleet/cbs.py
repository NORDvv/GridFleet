from __future__ import annotations

from collections import deque

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
