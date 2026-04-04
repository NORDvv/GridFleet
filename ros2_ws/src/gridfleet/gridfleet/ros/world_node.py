from __future__ import annotations

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

from gridfleet_interfaces.srv import PlanPaths
from gridfleet_interfaces.msg import RobotPath, RobotState

#  from ..conflict_detection import detect_all_conflicts
from ..models import Position  # , Robot
from ..scenarios import prioritized_demo_scenario
#  from ..simulator import Simulator
#  from ..grid_map import GridMap


class WorldNode(Node):
    def __init__(self) -> None:
        super().__init__("world_node")

        self.declare_parameter("tick_seconds", 0.5)
        self.declare_parameter("max_steps", 30)

        self.tick_seconds = float(self.get_parameter("tick_seconds").value)
        self.max_steps = int(self.get_parameter("max_steps").value)

        self.grid, self.robots = prioritized_demo_scenario()
        self.robot_lookup = {robot.robot_id: robot for robot in self.robots}
        self.step_count = 0
        self.paths_published = False

        self.plan_paths_client = self.create_client(PlanPaths, "plan_paths")
        self.path_publisher = self.create_publisher(RobotPath, "robot_paths", 10)
        self.tick_publisher = self.create_publisher(Int32, "world_tick", 10)
        self.state_subscription = self.create_subscription(
            RobotState,
            "robot_states",
            self.handle_robot_state,
            10,
        )

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

        self.planned_paths = list(response.paths)

        self.get_logger().info(
            f"World node started with {len(self.robots)} robots, "
            f"tick_seconds={self.tick_seconds}, max_steps={self.max_steps}"
        )

        self.timer = self.create_timer(self.tick_seconds, self.timer_callback)

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

    def handle_robot_state(self, msg: RobotState) -> None:
        if msg.robot_id not in self.robot_lookup:
            return

        robot = self.robot_lookup[msg.robot_id]
        robot.position = Position(msg.x, msg.y)
        robot.goal = Position(msg.goal_x, msg.goal_y)

    def publish_paths_once(self) -> None:
        if self.paths_published:
            return

        for path_msg in self.planned_paths:
            self.path_publisher.publish(path_msg)

        self.paths_published = True
        self.get_logger().info("Published robot paths.")

    def all_robots_at_goal(self) -> bool:
        return all(robot.position == robot.goal for robot in self.robots)

    def render_ascii(self) -> str:
        cells = [["." for _ in range(self.grid.width)] for _ in range(self.grid.height)]

        for obstacle in self.grid.obstacles:
            cells[obstacle.y][obstacle.x] = "#"

        for robot in self.robots:
            if cells[robot.goal.y][robot.goal.x] == ".":
                cells[robot.goal.y][robot.goal.x] = "G"

        for robot in self.robots:
            cells[robot.position.y][robot.position.x] = robot.robot_id[-1]

        return "\n".join(" ".join(row) for row in cells)

    def timer_callback(self) -> None:
        if not self.paths_published:
            self.publish_paths_once()
            return

        self.get_logger().info(f"\nStep {self.step_count}\n{self.render_ascii()}")

        if self.all_robots_at_goal():
            self.get_logger().info("All robots reached their goals. Shutting down.")
            self.timer.cancel()
            self.destroy_node()
            rclpy.shutdown()
            return

        if self.step_count >= self.max_steps:
            self.get_logger().info("Reached max_steps. Shutting down.")
            self.timer.cancel()
            self.destroy_node()
            rclpy.shutdown()
            return

        tick_msg = Int32()
        tick_msg.data = self.step_count
        self.tick_publisher.publish(tick_msg)
        self.step_count += 1


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = WorldNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
