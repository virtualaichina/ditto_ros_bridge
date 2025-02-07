This repo outlines the steps required to build, launch, and test the ditto_ros_bridge node, which acts as a bridge between the Eclipse Ditto platform and ROS 2.  This bridge allows you to seamlessly integrate data from Ditto "things" into your ROS 2 applications.  The instructions cover building the necessary ROS 2 packages, launching the bridge node, monitoring the published ROS 2 messages, and verifying that changes in Ditto are reflected in the ROS 2 environment.  By following these steps, you will be able to establish a connection between Ditto and ROS 2, enabling real-time data exchange and facilitating the development of ROS 2 applications that interact with Ditto-managed devices and data.

This bridge node subscribes to SSE events from Ditto and publishes them as ROS 2 messages. It listens to /things?namespaces={namespaces}&fields=thingId,attributes,features", where namespaces are "org.smartcity" and "com.manufacturing" in this setting.

It implements the following features:

1. Subscribes to Ditto's SSE API for real-time updates on digital twins.
2. Processes various types of data from Ditto Things, including attributes, features, and relationships.
3. Maps Ditto data to appropriate ROS messages and publishes them to specific topics.
4. Implements error handling and reconnection logic for robustness.

In order to run the bridge node, follow these steps:

1. Build (if you have updated /src):

in the root directory (/ditto_ros_bridge) run:
colcon build --packages-select ditto_ros_msg (if you have updated /ditto_ros_msg)

colcon build --packages-select ditto_ros_bridge (if you have updated /ditto_ros_bridge)

source install/setup.bash

2. launch bridge_node by:
ros2 launch ditto_ros_bridge bridge.launch.py

or ros2 run ditto_ros_bridge bridge_node (if you want to run it without launch file)

3. Monitor published ros messages (at various topics, e.g. /asset/metadata):
open a new terminal, in the root directory (/ditto_ros_bridge) run: source install/setup.bash 
then run: ros2 topic echo /asset/metadata (or any other topic)

4. Incure a change in Ditto and see the ros message update: 
curl -X PUT 'http://localhost:8080/api/2/things/org.smartcity:device99' -u 'ditto:ditto' -H 'Content-Type: application/json' -d '{ "attributes": {
      "location": {
        "latitude": 44.673856,
        "longitude": 8.261719,
        "elevation": 144
      }
    }
 }'

5. at the terminal running bridge_node, you should see:
[INFO] [1738938551.783719244] [ditto_ros_bridge]: Published thing_id: org.smartcity:device99 : point_msg: geometry_msgs.msg.Point(x=8.261719, y=44.673856, z=144.0) : metadata_msg: ditto_ros_msgs.msg.AssetMetadata(asset_id='org.smartcity:device99', type='', location=geometry_msgs.msg.Point(x=8.261719, y=44.673856, z=144.0))

6. at the terminal running ros2 topic echo /asset/metadata, you should see the updated ros message:
john@DESKTOP-0P475SS:~/ditto_ros_bridge$ ros2 topic echo /asset/metadata
asset_id: org.smartcity:device99
type: ''
location:
  x: 8.261719
  y: 44.673856
  z: 144.0

