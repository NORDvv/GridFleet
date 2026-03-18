from __future__ import annotations

import rclpy
from rclpy.node import Node

from ..conflict_detection import detect_all_conflicts
from ..prioritized_planner import prioritized_plan_paths
from ..scenarios import prioritized_demo_scenario
from ..simulator import Simulator


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 20)

        tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        grid, robots = prioritized_demo_scenario()

        prioritized_plan_paths(grid, robots, goal_hold_steps=20, max_time=50)

        for robot in robots:
            self.get_logger().info(f"{robot.robot_id} path: {robot.path}")

        vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

        if vertex_conflicts or edge_conflicts:
            self.get_logger().error("Conflicts still exist after prioritized planning.")
            for conflict in vertex_conflicts:
                self.get_logger().error(
                    f"Vertex conflict at t={conflict.time_step}: "
                    f"{conflict.robot_a}, {conflict.robot_b}, {conflict.position}"
                )
            for conflict in edge_conflicts:
                self.get_logger().error(
                    f"Edge conflict at t={conflict.time_step}: "
                    f"{conflict.robot_a} and {conflict.robot_b}"
                )
            raise RuntimeError("Prioritized planner produced conflicting paths.")

        self.get_logger().info("Phase 4 world node started. No conflicts detected.")

        self.sim = Simulator(grid, robots)
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
