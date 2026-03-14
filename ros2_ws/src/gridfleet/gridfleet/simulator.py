from __future__ import annotations
from .grid_map import GridMap
from .models import Robot  # Position,


class Simulator:
    def __init__(self, grid: GridMap, robots: list[Robot]) -> None:
        self.grid = grid
        self.robots = robots
        self.step_count = 0

    def render_ascii(self) -> str:
        cells = [["." for _ in range(self.grid.width)] for _ in range(self.grid.height)]

        for obstacle in self.grid.obstacles:
            cells[obstacle.y][obstacle.x] = "#"

        for robot in self.robots:
            if cells[robot.goal.y][robot.goal.x] == ".":
                cells[robot.goal.y][robot.goal.x] = "G"

        for robot in self.robots:
            x, y = robot.position.x, robot.position.y
            cells[y][x] = robot.robot_id[-1]

        return "\n".join(" ".join(row) for row in cells)

    def all_robots_at_goal(self) -> bool:
        return all(robot.position == robot.goal for robot in self.robots)

    def step_demo(self) -> None:
        for robot in self.robots:
            if len(robot.path) > 1:
                robot.path.pop(0)
                robot.position = robot.path[0]

        self.step_count += 1
