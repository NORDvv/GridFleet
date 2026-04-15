from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description() -> LaunchDescription:
    tick_seconds = LaunchConfiguration("tick_seconds")
    max_steps = LaunchConfiguration("max_steps")
    max_time = LaunchConfiguration("max_time")
    max_high_level_expansions = LaunchConfiguration("max_high_level_expansions")

    return LaunchDescription([
        DeclareLaunchArgument("tick_seconds", default_value="0.5"),
        DeclareLaunchArgument("max_steps", default_value="30"),
        DeclareLaunchArgument("max_time", default_value="50"),
        DeclareLaunchArgument("max_high_level_expansions", default_value="1000"),

        Node(
            package="gridfleet",
            executable="planner_node",
            name="planner_node",
            output="screen",
            parameters=[
                {"max_time": max_time},
                {"max_high_level_expansions": max_high_level_expansions},
            ],
        ),
        Node(
            package="gridfleet",
            executable="world_node",
            name="world_node",
            output="screen",
            parameters=[
                {"tick_seconds": tick_seconds},
                {"max_steps": max_steps},
            ],
        ),
        Node(
            package="gridfleet",
            executable="robot_node",
            name="robot_node_r1",
            output="screen",
            parameters=[{"robot_id": "R1"}],
        ),
        Node(
            package="gridfleet",
            executable="robot_node",
            name="robot_node_r2",
            output="screen",
            parameters=[{"robot_id": "R2"}],
        ),
        Node(
            package="gridfleet",
            executable="robot_node",
            name="robot_node_r3",
            output="screen",
            parameters=[{"robot_id": "R3"}],
        ),
        Node(
            package="gridfleet",
            executable="visualizer_node",
            name="visualizer_node",
            output="screen",
            parameters=[
                {"marker_frame": "map"},
                {"publish_period": 0.1},
                {"robot_diameter": 0.35},
                {"robot_height": 0.20},
                {"goal_diameter": 0.18},
                {"goal_height": 0.08},
            ],
        ),
    ])
#  ros2 launch gridfleet gridfleet_system.launch.py tick_seconds:=0.25 max_steps:=50
