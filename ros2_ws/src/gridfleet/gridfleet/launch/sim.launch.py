from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    return LaunchDescription([
        Node(
            package="gridfleet",
            executable="world_node",
            name="world_node",
            output="screen",
            parameters=[
                {"tick_seconds": 0.5},
                {"max_steps": 20},
            ],
        )
    ])
