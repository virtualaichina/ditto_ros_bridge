This document outlines the steps required to build, launch, and test the ditto_ros_bridge node, which acts as a bridge between the Eclipse Ditto platform and ROS 2.  This bridge allows you to seamlessly integrate data from Ditto "things" into your ROS 2 applications.  The instructions cover building the necessary ROS 2 packages, launching the bridge node, monitoring the published ROS 2 messages, and verifying that changes in Ditto are reflected in the ROS 2 environment.  By following these steps, you will be able to establish a connection between Ditto and ROS 2, enabling real-time data exchange and facilitating the development of ROS 2 applications that interact with Ditto-managed devices and data.

1. Build (if you have updated /src):

in the root directory (/ditto_ros_bridge) run:
colcon build --packages-select ditto_ros_msg (if you have updated /ditto_ros_msg)

colcon build --packages-select ditto_ros_bridge (if you have updated /ditto_ros_bridge)

source install/setup.bash

2. launch bridge_node by:
ros2 launch ditto_ros_bridge bridge.launch.py

or ros2 run ditto_ros_bridge bridge_node --ros-args -p debug:=true (for debugging)

3. Monitor published ros messages (at /ditto/things):
open a new terminal, in the root directory (/ditto_ros_bridge) run: source install/setup.bash 
then run: ros2 topic echo /ditto/things

4. Incure a change in Ditto and see the ros message update: 
curl -X PUT 'http://localhost:8080/api/2/things/org.eclipse.ditto.ttn.demo:device9' -u 'ditto:ditto' -H 'Content-Type: application/json' -d '{ "features": { "sensor": { "properties": { "temperature": 2, "humidity": 47 } }, "location": { "properties": { "x": 1.5, "y": 2.3, "z": 0.0 } } } }'

5. at the terminal running bridge_node, you should see:
john@DESKTOP-0P475SS:~/ditto_ros_bridge$ ros2 run ditto_ros_bridge bridge_node --ros-args -p debug:=true
[INFO] [1738770276.715628218] [ditto_ros_bridge]: Connecting to SSE stream: http://localhost:8080/api/2/things?namespaces=org.eclipse.ditto.ttn.demo
[INFO] [1738770276.731505008] [ditto_ros_bridge]: Connected to SSE stream. Waiting for events...
[INFO] [1738770464.435665787] [ditto_ros_bridge]: Published thing_id: org.eclipse.ditto.ttn.demo:device6 temp: 2.0 humidity: 47.0 position: (1.5, 2.3, 0.0)

6. at the terminal running ros2 topic echo /ditto/things, you should see the updated ros message:

john@DESKTOP-0P475SS:~$ ros2 topic echo /ditto/things
thing_id: org.eclipse.ditto.ttn.demo:device6
temperature: 2.0
humidity: 47.0
position:
  x: 1.5
  y: 2.3
  z: 0.0