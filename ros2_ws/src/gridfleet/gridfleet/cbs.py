from __future__ import annotations

from collections import deque
from dataclasses import dataclass

from .grid_map import GridMap
from .models import Position, Robot


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
