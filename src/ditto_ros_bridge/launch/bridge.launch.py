from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ditto_ros_bridge',
            executable='bridge_node',
            output='screen',
            name='ditto_ros_bridge'
        )
    ])