from __future__ import annotations

import rclpy
from rclpy.node import Node

from gridfleet_interfaces.srv import PlanPaths

from ..conflict_detection import detect_all_conflicts
from ..models import Position
from ..scenarios import prioritized_demo_scenario
from ..simulator import Simulator


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 30)

        tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        grid, robots = prioritized_demo_scenario()
        self.grid = grid
        self.robots = robots

        self.plan_paths_client = self.create_client(PlanPaths, "plan_paths")

        self.get_logger().info("Waiting for planner service 'plan_paths'...")
        while not self.plan_paths_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Planner service not available yet, waiting again...")

        request = self.build_plan_paths_request()
        future = self.plan_paths_client.call_async(request)

        rclpy.spin_until_future_complete(self, future)

        if not future.done() or future.result() is None:
            raise RuntimeError("Planner service call failed or returned no result.")

        response = future.result()

        if not response.success:
            raise RuntimeError(
                f"Planner service returned failure: {response.error_message}"
            )

        self.assign_paths_from_response(response)
        self.log_received_paths()

        vertex_conflicts, edge_conflicts = detect_all_conflicts(self.robots)
        if vertex_conflicts or edge_conflicts:
            raise RuntimeError("Received conflicting paths from planner service.")

        self.sim = Simulator(self.grid, self.robots)

        self.get_logger().info(
            f"World node started with {len(self.robots)} robots, "
            f"tick_seconds={tick_seconds}, max_steps={self.max_steps}"
        )

        self.timer = self.create_timer(tick_seconds, self.timer_callback)

    def build_plan_paths_request(self) -> PlanPaths.Request:
        request = PlanPaths.Request()

        request.map_width = self.grid.width
        request.map_height = self.grid.height

        sorted_obstacles = sorted(self.grid.obstacles, key=lambda pos: (pos.x, pos.y))
        request.obstacle_xs = [pos.x for pos in sorted_obstacles]
        request.obstacle_ys = [pos.y for pos in sorted_obstacles]

        request.robot_ids = [robot.robot_id for robot in self.robots]
        request.start_xs = [robot.position.x for robot in self.robots]
        request.start_ys = [robot.position.y for robot in self.robots]
        request.goal_xs = [robot.goal.x for robot in self.robots]
        request.goal_ys = [robot.goal.y for robot in self.robots]

        return request

    def assign_paths_from_response(self, response: PlanPaths.Response) -> None:
        path_lookup = {}

        for path_msg in response.paths:
            if len(path_msg.xs) != len(path_msg.ys):
                raise ValueError(
                    f"Path coordinate arrays do not match for {path_msg.robot_id}."
                )

            path_lookup[path_msg.robot_id] = [
                Position(x, y)
                for x, y in zip(path_msg.xs, path_msg.ys)
            ]

        for robot in self.robots:
            if robot.robot_id not in path_lookup:
                raise ValueError(f"Missing returned path for robot {robot.robot_id}.")
            robot.path = path_lookup[robot.robot_id]

    def log_received_paths(self) -> None:
        for robot in self.robots:
            self.get_logger().info(f"{robot.robot_id} path: {robot.path}")

    def timer_callback(self) -> None:
        self.get_logger().info(f"\nStep {self.sim.step_count}\n{self.sim.render_ascii()}")

        if self.sim.all_robots_at_goal():
            self.get_logger().info("All robots reached their goals. Shutting down.")
            self.timer.cancel()
            self.destroy_node()
            rclpy.shutdown()
            return

        if self.sim.step_count >= self.max_steps:
            self.get_logger().info("Reached max_steps. Shutting down.")
            self.timer.cancel()
            self.destroy_node()
            rclpy.shutdown()
            return

        self.sim.step()


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = WorldNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
