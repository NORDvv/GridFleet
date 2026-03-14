from __future__ import annotations

import rclpy
from rclpy.node import Node

from ..planner import bfs_plan
from ..scenarios import bfs_demo_scenario  # basic_scenario,
from ..simulator import Simulator


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 20)

        tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        # grid, robots = basic_scenario()
        grid, robots = bfs_demo_scenario()
        self.sim = Simulator(grid, robots)

        robot = self.sim.robots[0]
        robot.path = bfs_plan(self.sim.grid, robot.position, robot.goal)

        if not robot.path:
            self.get_logger().error(f"No path found for {robot.robot_id}.")
            raise RuntimeError("Planner failed to find a path.")

        self.get_logger().info("GridFleet Phase 2 world node started.")
        self.get_logger().info(f"Planned path for {robot.robot_id}: {robot.path}")
        self.get_logger().info(
            f"tick_seconds={tick_seconds}, max_steps={self.max_steps}"
        )

        self.timer = self.create_timer(tick_seconds, self.timer_callback)

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

        self.sim.step_demo()


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = WorldNode()
    rclpy.spin(node)


if __name__ == "__main__":
    main()
