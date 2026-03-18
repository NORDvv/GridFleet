from __future__ import annotations

from collections import deque
from dataclasses import dataclass

from .grid_map import GridMap
from .models import Position, Robot


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


class ReservationTable:
    def __init__(self) -> None:
        self.vertex_reservations: set[tuple[Position, int]] = set()
        self.edge_reservations: set[tuple[Position, Position, int]] = set()

    def reserve_path(self, path: list[Position], goal_hold_steps: int = 20) -> None:
        if not path:
            raise ValueError("Cannot reserve an empty path.")

        for time_step in range(len(path)):
            self.vertex_reservations.add((path[time_step], time_step))

        for time_step in range(len(path) - 1):
            from_pos = path[time_step]
            to_pos = path[time_step + 1]
            self.edge_reservations.add((from_pos, to_pos, time_step))

        goal = path[-1]
        final_time = len(path) - 1

        for extra_time in range(final_time + 1, final_time + 1 + goal_hold_steps):
            self.vertex_reservations.add((goal, extra_time))

    def is_vertex_reserved(self, position: Position, time_step: int) -> bool:
        return (position, time_step) in self.vertex_reservations

    def is_edge_reserved(
        self,
        from_pos: Position,
        to_pos: Position,
        time_step: int,
    ) -> bool:
        return (from_pos, to_pos, time_step) in self.edge_reservations

    def would_cause_edge_conflict(
        self,
        from_pos: Position,
        to_pos: Position,
        time_step: int,
    ) -> bool:
        return (to_pos, from_pos, time_step) in self.edge_reservations


def prioritized_plan_for_robot(
    grid: GridMap,
    start: Position,
    goal: Position,
    reservation_table: ReservationTable,
    max_time: int = 50,
) -> list[Position]:
    start_state = TimedState(start, 0)

    frontier = deque([start_state])
    came_from: dict[TimedState, TimedState | None] = {start_state: None}

    while frontier:
        current = frontier.popleft()

        if current.position == goal:
            return reconstruct_timed_path(came_from, current)

        if current.time_step >= max_time:
            continue

        next_time = current.time_step + 1

        for next_pos in grid.neighbors_with_wait(current.position):
            next_state = TimedState(next_pos, next_time)

            if next_state in came_from:
                continue

            if reservation_table.is_vertex_reserved(next_pos, next_time):
                continue

            if reservation_table.would_cause_edge_conflict(
                current.position,
                next_pos,
                current.time_step,
            ):
                continue

            came_from[next_state] = current
            frontier.append(next_state)

    return []


def prioritized_plan_paths(
    grid: GridMap,
    robots: list[Robot],
    goal_hold_steps: int = 20,
    max_time: int = 50,
) -> None:
    reservation_table = ReservationTable()

    for robot in robots:
        path = prioritized_plan_for_robot(
            grid=grid,
            start=robot.position,
            goal=robot.goal,
            reservation_table=reservation_table,
            max_time=max_time,
        )

        if not path:
            raise RuntimeError(f"No conflict-free path found for {robot.robot_id}")

        robot.path = path
        reservation_table.reserve_path(path, goal_hold_steps=goal_hold_steps)
