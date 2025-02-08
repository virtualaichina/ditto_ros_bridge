This README outlines the steps required to build, launch, and test the ditto_ros_bridge node, which acts as a bridge between the Eclipse Ditto platform and ROS 2.  This bridge allows you to seamlessly integrate data from Ditto "things" into your ROS 2 applications.  The instructions cover building the necessary ROS 2 packages, launching the bridge node, monitoring the published ROS 2 messages, and verifying that changes in Ditto are reflected in the ROS 2 environment.  By following these steps, you will be able to establish a connection between Ditto and ROS 2, enabling real-time data exchange and facilitating the development of ROS 2 applications that interact with Ditto-managed devices and data.

This bridge node subscribes to SSE events from Ditto and publishes them as ROS 2 messages. It listens to /things?namespaces={namespaces}&fields=thingId,attributes,features", where namespaces are "org.smartcity", "org.agriculture" and "com.manufacturing" in this setting.

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

4. To Incure an update to a Thing in Ditto and see the ros message update, run the following command in a new terminal: (here we use testcase # 7. Smart City - Environmental Monitoring Station from src/Testcase.txt) 
curl -X PUT 'http://localhost:8080/api/2/things/org.smartcity:env_station1' -u 'ditto:ditto' -H 'Content-Type: application/json' -d '{
  "attributes": {
    "location": {
      "latitude": 51.507351,
      "longitude": -0.127758,
      "elevation": 35
    },
    "asset_type": "environmental_station"
  },
  "features": {
    "environment": {
      "properties": {
        "aqi": 65,
        "noise": 55,
        "light": 12000,
        "co2": 425
      }
    },
    "temperature": {
      "properties": {
        "value": 22.5
      }
    },
    "humidity": {
      "properties": {
        "value": 60
      }
    },
    "pressure": {
      "properties": {
        "value": 1013.25
      }
    }
  }
}'

5. at the terminal running bridge_node, you should see:
[INFO] [1739004009.350295383] [ditto_ros_bridge]: Published thing_id: org.smartcity:env_station1 : point_msg: geometry_msgs.msg.Point(x=-0.127758, y=51.507351, z=35.0) : metadata_msg: ditto_ros_msgs.msg.AssetMetadata(asset_id='org.smartcity:env_station1', type='environmental_station', location=geometry_msgs.msg.Point(x=-0.127758, y=51.507351, z=35.0))
[INFO] [1739004009.352072593] [ditto_ros_bridge]: Published thing_id: org.smartcity:env_station1 : temp_msg: ditto_ros_msgs.msg.Temperature(temperature=22.5)
[INFO] [1739004009.355149814] [ditto_ros_bridge]: Published thing_id: org.smartcity:env_station1 : hum_msg: ditto_ros_msgs.msg.Humidity(humidity=60.0)
[INFO] [1739004009.359061334] [ditto_ros_bridge]: Published thing_id: org.smartcity:env_station1 : pre_msg: ditto_ros_msgs.msg.Pressure(pressure=1013.25)
[INFO] [1739004009.362472446] [ditto_ros_bridge]: Published thing_id: org.smartcity:env_station1 : env_msg: ditto_ros_msgs.msg.EnvironmentalData(air_quality_index=65.0, noise_level=55.0, light_intensity=12000.0, co2_level=425.0)

6. at the terminal running ros2 topic echo /asset/metadata, you should see the updated ros message:

john@DESKTOP-0P475SS:~/ditto_ros_bridge$ ros2 topic echo /asset/metadata
asset_id: org.smartcity:env_station1
type: environmental_station
location:
  x: -0.127758
  y: 51.507351
  z: 35.0

7. at the terminal running ros2 topic echo /sensor/pressure, you should see the updated ros message:

john@DESKTOP-0P475SS:~/ditto_ros_bridge$ ros2 topic echo /sensor/pressure
pressure: 1013.25

similarly, you can check the other topics like /sensor/humidity, /sensor/temperature, /environment/data, /energy/consumption to see the updated ros messages.

