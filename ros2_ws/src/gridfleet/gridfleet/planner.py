from __future__ import annotations
from collections import deque
from .grid_map import GridMap
from .models import Position, Robot


def reconstruct_path(
    came_from: dict[Position, Position | None],
    goal: Position,
) -> list[Position]:
    path: list[Position] = []
    current: Position | None = goal

    while current is not None:
        path.append(current)
        current = came_from[current]

    path.reverse()
    return path


def bfs_plan(grid: GridMap, start: Position, goal: Position) -> list[Position]:
    if not grid.is_free(start):
        raise ValueError("Start position is not free.")
    if not grid.is_free(goal):
        raise ValueError("Goal position is not free.")

    frontier = deque([start])
    came_from: dict[Position, Position | None] = {start: None}

    while frontier:
        current = frontier.popleft()

        if current == goal:
            return reconstruct_path(came_from, goal)

        for neighbor in grid.neighbors(current):
            if neighbor not in came_from:
                frontier.append(neighbor)
                came_from[neighbor] = current

    return []


def plan_paths_for_robots(grid: GridMap, robots: list[Robot]) -> None:
    for robot in robots:
        robot.path = bfs_plan(grid, robot.position, robot.goal)
        if not robot.path:
            raise RuntimeError(f"No path found for {robot.robot_id}")
