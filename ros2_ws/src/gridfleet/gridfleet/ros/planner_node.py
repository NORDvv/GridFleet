from __future__ import annotations

from typing import List

import rclpy
from rclpy.node import Node

from gridfleet_interfaces.msg import RobotPath
from gridfleet_interfaces.srv import PlanPaths

from ..cbs import cbs_solve
from ..grid_map import GridMap
from ..models import Position, Robot


class PlannerNode(Node):
    def __init__(self) -> None:
        super().__init__("planner_node")

        self.declare_parameter("max_time", 50)
        self.declare_parameter("max_high_level_expansions", 1000)

        self.max_time = int(self.get_parameter("max_time").value)
        self.max_high_level_expansions = int(
            self.get_parameter("max_high_level_expansions").value
        )

        self.service = self.create_service(
            PlanPaths,
            "plan_paths",
            self.handle_plan_paths_request,
        )

        self.get_logger().info(
            "Planner node is ready on service 'plan_paths'."
        )

    def handle_plan_paths_request(
        self,
        request: PlanPaths.Request,
        response: PlanPaths.Response,
    ) -> PlanPaths.Response:
        try:
            self.validate_request(request)

            grid = self.build_grid_from_request(request)
            robots = self.build_robots_from_request(request)

            self.get_logger().info(
                f"Received planning request for {len(robots)} robots "
                f"on a {grid.width}x{grid.height} grid with "
                f"{len(grid.obstacles)} obstacles."
            )

            paths = cbs_solve(
                grid=grid,
                robots=robots,
                max_time=self.max_time,
                max_high_level_expansions=self.max_high_level_expansions,
            )

            response.paths = self.build_path_messages(paths)
            response.success = True
            response.error_message = ""

            self.get_logger().info("Planning request completed successfully.")
            return response

        except Exception as exc:
            response.success = False
            response.error_message = str(exc)
            response.paths = []

            self.get_logger().error(f"Planning request failed: {exc}")
            return response

    def validate_request(self, request: PlanPaths.Request) -> None:
        obstacle_len_match = len(request.obstacle_xs) == len(request.obstacle_ys)
        if not obstacle_len_match:
            raise ValueError("Obstacle coordinate arrays must have matching lengths.")

        robot_count = len(request.robot_ids)

        if robot_count == 0:
            raise ValueError("Planning request must contain at least one robot.")

        start_len_match = (
            len(request.start_xs) == robot_count
            and len(request.start_ys) == robot_count
        )
        if not start_len_match:
            raise ValueError("Start coordinate arrays must match robot_ids length.")

        goal_len_match = (
            len(request.goal_xs) == robot_count
            and len(request.goal_ys) == robot_count
        )
        if not goal_len_match:
            raise ValueError("Goal coordinate arrays must match robot_ids length.")

        if request.map_width <= 0 or request.map_height <= 0:
            raise ValueError("Map dimensions must be positive integers.")

    def build_grid_from_request(self, request: PlanPaths.Request) -> GridMap:
        obstacles = {
            Position(x, y)
            for x, y in zip(request.obstacle_xs, request.obstacle_ys)
        }

        return GridMap(
            width=request.map_width,
            height=request.map_height,
            obstacles=obstacles,
        )

    def build_robots_from_request(self, request: PlanPaths.Request) -> List[Robot]:
        robots: List[Robot] = []

        for robot_id, sx, sy, gx, gy in zip(
            request.robot_ids,
            request.start_xs,
            request.start_ys,
            request.goal_xs,
            request.goal_ys,
        ):
            robots.append(
                Robot(
                    robot_id=robot_id,
                    position=Position(sx, sy),
                    goal=Position(gx, gy),
                )
            )

        return robots

    def build_path_messages(
        self,
        paths: dict[str, list[Position]],
    ) -> List[RobotPath]:
        path_messages: List[RobotPath] = []

        for robot_id, path in paths.items():
            msg = RobotPath()
            msg.robot_id = robot_id
            msg.xs = [pos.x for pos in path]
            msg.ys = [pos.y for pos in path]
            path_messages.append(msg)

        return path_messages


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = PlannerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
