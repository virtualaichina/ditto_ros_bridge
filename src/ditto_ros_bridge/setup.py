from setuptools import setup

setup(
    name='ditto_ros_bridge',
    version='0.1.0',
    packages=['ditto_ros_bridge'],
    install_requires=[
        'setuptools',
        'aiohttp',
        'asyncio',
    ],
    entry_points={
        'console_scripts': [
            'bridge_node = ditto_ros_bridge.bridge_node:main',
        ],
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + 'ditto_ros_bridge']),
        ('share/' + 'ditto_ros_bridge', ['package.xml', 'launch/bridge.launch.py']),
    ],
)