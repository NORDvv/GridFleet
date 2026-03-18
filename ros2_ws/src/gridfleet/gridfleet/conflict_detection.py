from __future__ import annotations

from dataclasses import dataclass

from .models import Position, Robot


@dataclass(frozen=True, slots=True)
class VertexConflict:
    time_step: int
    robot_a: str
    robot_b: str
    position: Position


@dataclass(frozen=True, slots=True)
class EdgeConflict:
    time_step: int
    robot_a: str
    robot_b: str
    from_a: Position
    to_a: Position
    from_b: Position
    to_b: Position


def position_at_time(path: list[Position], time_step: int) -> Position:
    if not path:
        raise ValueError("Path must not be empty.")

    if time_step < len(path):
        return path[time_step]

    return path[-1]


def detect_vertex_conflicts(
    robots: list[Robot],
    max_time: int,
) -> list[VertexConflict]:
    conflicts: list[VertexConflict] = []

    for time_step in range(max_time):
        for i in range(len(robots)):
            for j in range(i + 1, len(robots)):
                robot_a = robots[i]
                robot_b = robots[j]

                pos_a = position_at_time(robot_a.path, time_step)
                pos_b = position_at_time(robot_b.path, time_step)

                if pos_a == pos_b:
                    conflicts.append(
                        VertexConflict(
                            time_step=time_step,
                            robot_a=robot_a.robot_id,
                            robot_b=robot_b.robot_id,
                            position=pos_a,
                        )
                    )

    return conflicts


def detect_edge_conflicts(
    robots: list[Robot],
    max_time: int,
) -> list[EdgeConflict]:
    conflicts: list[EdgeConflict] = []

    for time_step in range(max_time - 1):
        for i in range(len(robots)):
            for j in range(i + 1, len(robots)):
                robot_a = robots[i]
                robot_b = robots[j]

                a_from = position_at_time(robot_a.path, time_step)
                a_to = position_at_time(robot_a.path, time_step + 1)
                b_from = position_at_time(robot_b.path, time_step)
                b_to = position_at_time(robot_b.path, time_step + 1)

                if a_from == b_to and a_to == b_from:
                    conflicts.append(
                        EdgeConflict(
                            time_step=time_step,
                            robot_a=robot_a.robot_id,
                            robot_b=robot_b.robot_id,
                            from_a=a_from,
                            to_a=a_to,
                            from_b=b_from,
                            to_b=b_to,
                        )
                    )

    return conflicts


def detect_all_conflicts(robots: list[Robot]) -> tuple[list[VertexConflict], list[EdgeConflict]]:
    if not robots:
        return [], []

    max_time = max(len(robot.path) for robot in robots)

    vertex_conflicts = detect_vertex_conflicts(robots, max_time)
    edge_conflicts = detect_edge_conflicts(robots, max_time)

    return vertex_conflicts, edge_conflicts
