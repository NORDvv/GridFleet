from __future__ import annotations

from typing import Dict

import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker

from gridfleet_interfaces.msg import RobotState


class VisualizerNode(Node):
    def __init__(self) -> None:
        super().__init__("visualizer_node")

        self.declare_parameter("marker_frame", "map")
        self.declare_parameter("publish_period", 0.1)
        self.declare_parameter("robot_diameter", 0.35)
        self.declare_parameter("robot_height", 0.20)

        self.marker_frame = str(self.get_parameter("marker_frame").value)
        self.publish_period = float(self.get_parameter("publish_period").value)
        self.robot_diameter = float(self.get_parameter("robot_diameter").value)
        self.robot_height = float(self.get_parameter("robot_height").value)

        self.latest_states: Dict[str, RobotState] = {}

        self.state_subscription = self.create_subscription(
            RobotState,
            "robot_states",
            self.handle_robot_state,
            10,
        )

        self.marker_publisher = self.create_publisher(
            Marker,
            "visualization_marker",
            10,
        )

        self.timer = self.create_timer(self.publish_period, self.publish_markers)

        self.get_logger().info(
            "Visualizer node started. Publishing robot cylinder markers."
        )

    def handle_robot_state(self, msg: RobotState) -> None:
        self.latest_states[msg.robot_id] = msg

    def publish_markers(self) -> None:
        for index, robot_id in enumerate(sorted(self.latest_states.keys())):
            state = self.latest_states[robot_id]
            marker = self.build_robot_marker(state, index)
            self.marker_publisher.publish(marker)

    def build_robot_marker(self, state: RobotState, marker_id: int) -> Marker:
        marker = Marker()
        marker.header.frame_id = self.marker_frame
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = "robots"
        marker.id = marker_id
        marker.type = Marker.CYLINDER
        marker.action = Marker.ADD

        # Grid cell centers in RViz
        marker.pose.position.x = float(state.x)
        marker.pose.position.y = float(state.y)
        marker.pose.position.z = self.robot_height / 2.0

        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0

        marker.scale.x = self.robot_diameter
        marker.scale.y = self.robot_diameter
        marker.scale.z = self.robot_height

        r, g, b = self.color_for_robot(state.robot_id)
        marker.color.r = r
        marker.color.g = g
        marker.color.b = b
        marker.color.a = 1.0

        marker.lifetime.sec = 0
        marker.lifetime.nanosec = 0

        return marker

    def color_for_robot(self, robot_id: str) -> tuple[float, float, float]:
        color_map = {
            "R1": (1.0, 0.2, 0.2),
            "R2": (0.2, 0.8, 0.2),
            "R3": (0.2, 0.4, 1.0),
            "R4": (1.0, 0.7, 0.2),
            "R5": (0.7, 0.2, 1.0),
            "R6": (0.2, 0.9, 0.9),
        }
        return color_map.get(robot_id, (0.8, 0.8, 0.8))


def main(args: list[str] | None = None) -> None:
    rclpy.init(args=args)
    node = VisualizerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()