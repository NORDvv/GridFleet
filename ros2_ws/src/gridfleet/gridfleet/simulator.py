from __future__ import annotations

from .grid_map import GridMap
from .models import Position, Robot


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
        """
        Temporary fake movement logic for milestone 1.
        Each robot greedily tries to move one step toward its goal.
        This is NOT MAPF yet.
        """
        for robot in self.robots:
            dx = 0
            dy = 0

            if robot.position.x < robot.goal.x:
                dx = 1
            elif robot.position.x > robot.goal.x:
                dx = -1
            elif robot.position.y < robot.goal.y:
                dy = 1
            elif robot.position.y > robot.goal.y:
                dy = -1

            next_pos = Position(robot.position.x + dx, robot.position.y + dy)

            if self.grid.is_free(next_pos):
                robot.position = next_pos
        self.step_count += 1