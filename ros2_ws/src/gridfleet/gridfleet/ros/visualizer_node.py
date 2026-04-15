from __future__ import annotations

from typing import Dict

import rclpy
from geometry_msgs.msg import Point
from rclpy.node import Node
from visualization_msgs.msg import Marker
from rclpy.parameter import Parameter

from gridfleet_interfaces.msg import RobotPath, RobotState


class VisualizerNode(Node):
    def __init__(self) -> None:
        super().__init__("visualizer_node")

        self.declare_parameter("marker_frame", "map")
        self.declare_parameter("publish_period", 0.2)

        self.declare_parameter("robot_diameter", 0.35)
        self.declare_parameter("robot_height", 0.20)

        self.declare_parameter("goal_diameter", 0.18)
        self.declare_parameter("goal_height", 0.08)

        self.declare_parameter("path_line_width", 0.05)
        self.declare_parameter("path_z", 0.03)

        self.declare_parameter("obstacle_cells", Parameter.Type.STRING_ARRAY)
        self.declare_parameter("obstacle_size", 0.9)
        self.declare_parameter("obstacle_height", 0.20)

        self.marker_frame = str(self.get_parameter("marker_frame").value)
        self.publish_period = float(self.get_parameter("publish_period").value)

        self.robot_diameter = float(self.get_parameter("robot_diameter").value)
        self.robot_height = float(self.get_parameter("robot_height").value)

        self.goal_diameter = float(self.get_parameter("goal_diameter").value)
        self.goal_height = float(self.get_parameter("goal_height").value)

        self.path_line_width = float(self.get_parameter("path_line_width").value)
        self.path_z = float(self.get_parameter("path_z").value)

        self.obstacle_cells = list(self.get_parameter("obstacle_cells").value)
        self.obstacle_size = float(self.get_parameter("obstacle_size").value)
        self.obstacle_height = float(self.get_parameter("obstacle_height").value)

        self.latest_states: Dict[str, RobotState] = {}
        self.latest_paths: Dict[str, RobotPath] = {}

        self.state_subscription = self.create_subscription(
            RobotState,
            "robot_states",
            self.handle_robot_state,
            10,
        )

        self.path_subscription = self.create_subscription(
            RobotPath,
            "robot_paths",
            self.handle_robot_path,
            10,
        )

        self.marker_publisher = self.create_publisher(
            Marker,
            "visualization_marker",
            10,
        )

        self.timer = self.create_timer(self.publish_period, self.publish_markers)

        self.get_logger().info(
            "Visualizer node started. Publishing robot, goal, path, and obstacle markers."
        )

    def handle_robot_state(self, msg: RobotState) -> None:
        self.latest_states[msg.robot_id] = msg

    def handle_robot_path(self, msg: RobotPath) -> None:
        self.latest_paths[msg.robot_id] = msg

    def publish_markers(self) -> None:
        obstacle_marker = self.build_obstacle_marker()
        self.marker_publisher.publish(obstacle_marker)

        robot_ids = sorted(set(self.latest_states.keys()) | set(self.latest_paths.keys()))

        for index, robot_id in enumerate(robot_ids):
            state = self.latest_states.get(robot_id)
            path = self.latest_paths.get(robot_id)

            if path is not None:
                path_marker = self.build_path_marker(path, index)
                self.marker_publisher.publish(path_marker)

            if state is not None:
                robot_marker = self.build_robot_marker(state, index)
                self.marker_publisher.publish(robot_marker)

                goal_marker = self.build_goal_marker(state, index)
                self.marker_publisher.publish(goal_marker)

    def build_robot_marker(self, state: RobotState, marker_id: int) -> Marker:
        marker = Marker()
        marker.header.frame_id = self.marker_frame
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = "robots"
        marker.id = marker_id
        marker.type = Marker.CYLINDER
        marker.action = Marker.ADD

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

    def build_goal_marker(self, state: RobotState, marker_id: int) -> Marker:
        marker = Marker()
        marker.header.frame_id = self.marker_frame
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = "goals"
        marker.id = marker_id
        marker.type = Marker.SPHERE
        marker.action = Marker.ADD

        marker.pose.position.x = float(state.goal_x)
        marker.pose.position.y = float(state.goal_y)
        marker.pose.position.z = self.goal_height / 2.0

        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0

        marker.scale.x = self.goal_diameter
        marker.scale.y = self.goal_diameter
        marker.scale.z = self.goal_height

        r, g, b = self.color_for_robot(state.robot_id)
        marker.color.r = r
        marker.color.g = g
        marker.color.b = b
        marker.color.a = 0.65

        marker.lifetime.sec = 0
        marker.lifetime.nanosec = 0

        return marker

    def build_path_marker(self, path: RobotPath, marker_id: int) -> Marker:
        marker = Marker()
        marker.header.frame_id = self.marker_frame
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = "paths"
        marker.id = marker_id
        marker.type = Marker.LINE_STRIP
        marker.action = Marker.ADD

        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0

        marker.scale.x = self.path_line_width

        r, g, b = self.color_for_robot(path.robot_id)
        marker.color.r = r
        marker.color.g = g
        marker.color.b = b
        marker.color.a = 0.85

        marker.lifetime.sec = 0
        marker.lifetime.nanosec = 0

        marker.points = []
        for x, y in zip(path.xs, path.ys):
            point = Point()
            point.x = float(x)
            point.y = float(y)
            point.z = self.path_z
            marker.points.append(point)

        return marker

    def build_obstacle_marker(self) -> Marker:
        marker = Marker()
        marker.header.frame_id = self.marker_frame
        marker.header.stamp = self.get_clock().now().to_msg()

        marker.ns = "obstacles"
        marker.id = 0
        marker.type = Marker.CUBE_LIST
        marker.action = Marker.ADD

        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0

        marker.scale.x = self.obstacle_size
        marker.scale.y = self.obstacle_size
        marker.scale.z = self.obstacle_height

        marker.color.r = 0.25
        marker.color.g = 0.25
        marker.color.b = 0.25
        marker.color.a = 1.0

        marker.lifetime.sec = 0
        marker.lifetime.nanosec = 0

        marker.points = []
        for cell in self.obstacle_cells:
            x_str, y_str = cell.split(",")
            point = Point()
            point.x = float(x_str)
            point.y = float(y_str)
            point.z = self.obstacle_height / 2.0
            marker.points.append(point)

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