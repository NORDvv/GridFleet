from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from launch.actions import TimerAction


def generate_launch_description() -> LaunchDescription:
    tick_seconds = LaunchConfiguration("tick_seconds")
    max_steps = LaunchConfiguration("max_steps")
    max_time = LaunchConfiguration("max_time")
    max_high_level_expansions = LaunchConfiguration("max_high_level_expansions")

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", "/home/drnord/dev/Projects/GridFleet/rviz2_config/gridlfeet_config.rviz"],
    )

    visualizer_node = Node(
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
            {"path_line_width": 0.05},
            {"path_z": 0.03},
            {"obstacle_cells": ["3,0","3,1","3,4", "3,3","3,5","3,6","3,7"]},
            {"obstacle_size": 0.9},
            {"obstacle_height": 0.20},
        ],
    )

    delayed_nodes1 = TimerAction(
        period=5.0,
        actions=[
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
        ],
    )


    delayed_nodes2 = TimerAction(
        period=7.0,
        actions=[
            Node(
                package="gridfleet",
                executable="planner_node",
                name="planner_node",
                output="screen",
                parameters=[
                    {"max_time": 50},
                    {"max_high_level_expansions": 1000},
                ],
            ),
            Node(
                package="gridfleet",
                executable="world_node",
                name="world_node",
                output="screen",
                parameters=[
                    {"tick_seconds": 0.5},
                    {"max_steps": 30},
                ],
            ),
        ],
    )

    return LaunchDescription([
        rviz_node,
        visualizer_node,
        delayed_nodes1,
        delayed_nodes2,
    ])
#  ros2 launch gridfleet gridfleet_system.launch.py tick_seconds:=0.25 max_steps:=50
