This README outlines the steps required to build, launch, and test the ditto_ros_bridge node, which acts as a bridge between the Eclipse Ditto platform and ROS 2.  This bridge allows you to seamlessly integrate data from Ditto "things" into your ROS 2 applications.  The instructions cover building the necessary ROS 2 packages, launching the bridge node, monitoring the published ROS 2 messages, and verifying that changes in Ditto are reflected in the ROS 2 environment.  By following these steps, you will be able to establish a connection between Ditto and ROS 2, enabling real-time data exchange and facilitating the development of ROS 2 applications that interact with Ditto-managed devices and data.

This bridge node subscribes to SSE events from Ditto and publishes them as ROS 2 messages. It listens to /things?namespaces={namespaces}&fields=thingId,attributes,features", where namespaces are "org.smartcity", "org.agriculture" and "com.manufacturing" in this setting.

It implements the following features:

1. Subscribes to Ditto's SSE API for real-time updates on digital twins.
2. Processes various types of data from Ditto Things, including attributes, features, and relationships.
3. Maps Ditto data to appropriate ROS messages and publishes them to specific topics.
4. Implements error handling and reconnection logic for robustness.

In order to run the bridge node and test it, follow these steps:

1. Build (if you have updated /src):

in the root directory (/ditto_ros_bridge) run:
colcon build --packages-select ditto_ros_msgs (if you have updated /ditto_ros_msgs)

colcon build --packages-select ditto_ros_bridge (if you have updated /ditto_ros_bridge)

source install/setup.bash

2. launch bridge_node by:
ros2 launch ditto_ros_bridge bridge.launch.py

or ros2 run ditto_ros_bridge bridge_node (if you want to run it without launch file)

3. run simulation scripts:
if you want to run simulation scripts, in this case, to simulate smart manufacturing conditions, open a new terminal, in the root directory (/ditto_ros_bridge) run: python3 smart_manufacturing_sim.py

4. at the terminal running bridge_node, you should see:
...(here only shows some of the messages)
[INFO] [1739004009.350295383] [ditto_ros_bridge]: Published thing_id: org.[INFO] [1739080324.321555362] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : metadata_msg: ditto_ros_msgs.msg.AssetMetadata(asset_id='com.manufacturing:machine3_5', type='cnc_machine', location=geometry_msgs.msg.Point(x=11.582350879423382, y=48.135270142576104, z=519.7130443562527))
[INFO] [1739080324.323817569] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : temp_msg: ditto_ros_msgs.msg.Temperature(temperature=23.474869774473795)
[INFO] [1739080324.325484053] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : imu_msg: ditto_ros_msgs.msg.Imu(linear_acceleration_x=0.09747552870911608, linear_acceleration_y=0.04901120369560372, linear_acceleration_z=0.03339744457608393, angular_velocity_x=0.009616948791647732, angular_velocity_y=-0.007132033783625858, angular_velocity_z=-0.002492252976161449)
[INFO] [1739080324.327222277] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : rel_msg: ditto_ros_msgs.msg.Relationship(parent_thing_id='com.manufacturing:production_line3', child_thing_id='com.manufacturing:machine3_5', relationship_type='part_of')
[INFO] [1739080324.329006052] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : status_msg: ditto_ros_msgs.msg.MachineStatus(machine_id='com.manufacturing:machine3_5', status='operational', uptime=360.0, efficiency=0.8198388498479533)
[INFO] [1739080324.331478017] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : energy_msg: ditto_ros_msgs.msg.EnergyConsumption(total_consumption=68.4524091428118, renewable_percentage=19.678826991763856, grid_load=988.7401397613744)
[INFO] [1739080324.335086930] [ditto_ros_bridge]: Published thing_id: com.manufacturing:machine3_5 : prod_msg: ditto_ros_msgs.msg.ProductionLine(line_id='com.manufacturing:machine3_5', units_produced=61, defect_count=0, overall_equipment_effectiveness=0.0)
[INFO] [1739080324.395235794] [ditto_ros_bridge]: Published thing_id: com.manufacturing:production_line3 : status_msg: ditto_ros_msgs.msg.MachineStatus(machine_id='com.manufacturing:production_line3', status='operational', uptime=360.0, efficiency=0.9179404737087339)
[INFO] [1739080324.398341521] [ditto_ros_bridge]: Published thing_id: com.manufacturing:production_line3 : prod_msg: ditto_ros_msgs.msg.ProductionLine(line_id='com.manufacturing:production_line3', units_produced=305, defect_count=1, overall_equipment_effectiveness=0.012750000000000001)

6. open a new terminal and run the following command to list the topics:

john@DESKTOP-0P475SS:~/ditto_ros_bridge$ ros2 topic list
/com_manufacturing_machine1_1/energy
/com_manufacturing_machine1_1/metadata
/com_manufacturing_machine1_1/production
/com_manufacturing_machine1_1/relationships
/com_manufacturing_machine1_1/sensor/imu
/com_manufacturing_machine1_1/sensor/temperature
/com_manufacturing_machine1_1/status
/com_manufacturing_machine1_2/energy
/com_manufacturing_machine1_2/metadata
/com_manufacturing_machine1_2/production
/com_manufacturing_machine1_2/relationships
/com_manufacturing_machine1_2/sensor/imu
/com_manufacturing_machine1_2/sensor/temperature
/com_manufacturing_machine1_2/status
/com_manufacturing_machine1_3/energy
/com_manufacturing_machine1_3/metadata
/com_manufacturing_machine1_3/production
/com_manufacturing_machine1_3/relationships
/com_manufacturing_machine1_3/sensor/imu
/com_manufacturing_machine1_3/sensor/temperature
/com_manufacturing_machine1_3/status
/com_manufacturing_machine1_4/energy
/com_manufacturing_machine1_4/metadata
/com_manufacturing_machine1_4/production
/com_manufacturing_machine1_4/relationships
/com_manufacturing_machine1_4/sensor/imu
/com_manufacturing_machine1_4/sensor/temperature
/com_manufacturing_machine1_4/status
/com_manufacturing_machine1_5/energy
/com_manufacturing_machine1_5/metadata
/com_manufacturing_machine1_5/production
/com_manufacturing_machine1_5/relationships
/com_manufacturing_machine1_5/sensor/imu
/com_manufacturing_machine1_5/sensor/temperature
/com_manufacturing_machine1_5/status
/com_manufacturing_machine2_1/energy
/com_manufacturing_machine2_1/metadata
/com_manufacturing_machine2_1/production
/com_manufacturing_machine2_1/relationships
/com_manufacturing_machine2_1/sensor/imu
/com_manufacturing_machine2_1/sensor/temperature
/com_manufacturing_machine2_1/status
/com_manufacturing_machine2_2/energy
/com_manufacturing_machine2_2/metadata
/com_manufacturing_machine2_2/production
/com_manufacturing_machine2_2/relationships
/com_manufacturing_machine2_2/sensor/imu
/com_manufacturing_machine2_2/sensor/temperature
/com_manufacturing_machine2_2/status
/com_manufacturing_machine2_3/energy
/com_manufacturing_machine2_3/metadata
/com_manufacturing_machine2_3/production
/com_manufacturing_machine2_3/relationships
/com_manufacturing_machine2_3/sensor/imu
/com_manufacturing_machine2_3/sensor/temperature
/com_manufacturing_machine2_3/status
/com_manufacturing_machine2_4/energy
/com_manufacturing_machine2_4/metadata
/com_manufacturing_machine2_4/production
/com_manufacturing_machine2_4/relationships
/com_manufacturing_machine2_4/sensor/imu
/com_manufacturing_machine2_4/sensor/temperature
/com_manufacturing_machine2_4/status
/com_manufacturing_machine2_5/energy
/com_manufacturing_machine2_5/metadata
/com_manufacturing_machine2_5/production
/com_manufacturing_machine2_5/relationships
/com_manufacturing_machine2_5/sensor/imu
/com_manufacturing_machine2_5/sensor/temperature
/com_manufacturing_machine2_5/status
/com_manufacturing_machine3_1/energy
/com_manufacturing_machine3_1/metadata
/com_manufacturing_machine3_1/production
/com_manufacturing_machine3_1/relationships
/com_manufacturing_machine3_1/sensor/imu
/com_manufacturing_machine3_1/sensor/temperature
/com_manufacturing_machine3_1/status
/com_manufacturing_machine3_2/energy
/com_manufacturing_machine3_2/metadata
/com_manufacturing_machine3_2/production
/com_manufacturing_machine3_2/relationships
/com_manufacturing_machine3_2/sensor/imu
/com_manufacturing_machine3_2/sensor/temperature
/com_manufacturing_machine3_2/status
/com_manufacturing_machine3_3/energy
/com_manufacturing_machine3_3/metadata
/com_manufacturing_machine3_3/production
/com_manufacturing_machine3_3/relationships
/com_manufacturing_machine3_3/sensor/imu
/com_manufacturing_machine3_3/sensor/temperature
/com_manufacturing_machine3_3/status
/com_manufacturing_machine3_4/energy
/com_manufacturing_machine3_4/metadata
/com_manufacturing_machine3_4/production
/com_manufacturing_machine3_4/relationships
/com_manufacturing_machine3_4/sensor/imu
/com_manufacturing_machine3_4/sensor/temperature
/com_manufacturing_machine3_4/status
/com_manufacturing_machine3_5/energy
/com_manufacturing_machine3_5/metadata
/com_manufacturing_machine3_5/production
/com_manufacturing_machine3_5/relationships
/com_manufacturing_machine3_5/sensor/imu
/com_manufacturing_machine3_5/sensor/temperature
/com_manufacturing_machine3_5/status
/com_manufacturing_production_line1/production
/com_manufacturing_production_line1/status
/com_manufacturing_production_line2/production
/com_manufacturing_production_line2/status
/com_manufacturing_production_line3/production
/com_manufacturing_production_line3/status
/parameter_events
/rosout
