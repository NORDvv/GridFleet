from __future__ import annotations

from typing import List

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

from gridfleet_interfaces.msg import RobotPath, RobotState

from ..models import Position


class RobotNode(Node):
    def __init__(self) -> None:
        super().__init__("robot_node")

        self.declare_parameter("robot_id", "R1")
        self.robot_id = str(self.get_parameter("robot_id").value)

        self.path: List[Position] = []
        self.current_index = 0
        self.position: Position | None = None
        self.goal: Position | None = None
        self.path_received = False

        self.path_subscription = self.create_subscription(
            RobotPath,
            "robot_paths",
            self.handle_path_message,
            10,
        )

        self.tick_subscription = self.create_subscription(
            Int32,
            "world_tick",
            self.handle_tick,
            10,
        )

        self.state_publisher = self.create_publisher(
            RobotState,
            "robot_states",
            10,
        )

        self.get_logger().info(f"Robot node started for {self.robot_id}")

    def handle_path_message(self, msg: RobotPath) -> None:
        if msg.robot_id != self.robot_id:
            return

        if len(msg.xs) != len(msg.ys):
            self.get_logger().error("Received invalid path with mismatched coordinates.")
            return

        self.path = [Position(x, y) for x, y in zip(msg.xs, msg.ys)]
        self.current_index = 0
        self.path_received = True

        if self.path:
            self.position = self.path[0]
            self.goal = self.path[-1]

        self.get_logger().info(f"{self.robot_id} received path with {len(self.path)} waypoints")
        self.publish_state()

    def handle_tick(self, msg: Int32) -> None:
        if not self.path_received or not self.path:
            return

        if self.current_index < len(self.path) - 1:
            self.current_index += 1
            self.position = self.path[self.current_index]

        self.publish_state()

    def publish_state(self) -> None:
        if self.position is None or self.goal is None:
            return

        msg = RobotState()
        msg.robot_id = self.robot_id
        msg.x = self.position.x
        msg.y = self.position.y
        msg.goal_x = self.goal.x
        msg.goal_y = self.goal.y
        msg.reached_goal = self.position == self.goal

        self.state_publisher.publish(msg)


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = RobotNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
