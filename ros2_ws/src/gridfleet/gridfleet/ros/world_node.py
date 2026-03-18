from __future__ import annotations

import rclpy
from rclpy.node import Node

from ..conflict_detection import detect_all_conflicts
from ..planner import plan_paths_for_robots  # bfs_plan
from ..scenarios import conflict_demo_scenario  # basic_scenario, bfs_demo_scenario
from ..simulator import Simulator


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 20)

        tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        grid, robots = conflict_demo_scenario()
        plan_paths_for_robots(grid, robots)

        vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

        self.get_logger().info("Phase 3 world node started.")
        self.get_logger().info(f"Planned paths for {len(robots)} robots.")

        if vertex_conflicts:
            self.get_logger().warn("Vertex conflicts detected:")
            for conflict in vertex_conflicts:
                self.get_logger().warn(
                    f"t={conflict.time_step}: {conflict.robot_a} and "
                    f"{conflict.robot_b} at {conflict.position}"
                )

        if edge_conflicts:
            self.get_logger().warn("Edge conflicts detected:")
            for conflict in edge_conflicts:
                self.get_logger().warn(
                    f"t={conflict.time_step}: {conflict.robot_a} "
                    f"{conflict.from_a}->{conflict.to_a} swaps with "
                    f"{conflict.robot_b} {conflict.from_b}->{conflict.to_b}"
                )

        if not vertex_conflicts and not edge_conflicts:
            self.get_logger().info("No conflicts detected.")

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
