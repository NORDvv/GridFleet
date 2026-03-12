from __future__ import annotations

import rclpy
from rclpy.node import Node

from ..scenarios import basic_scenario
from ..simulator import Simulator


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 20)

        tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        grid, robots = basic_scenario()
        self.sim = Simulator(grid, robots)

        self.get_logger().info("GridFleet world node started.")
        self.get_logger().info(
            f"Running simulation with {len(self.sim.robots)} robots, "
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