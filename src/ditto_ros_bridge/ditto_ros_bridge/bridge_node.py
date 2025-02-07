#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import aiohttp
import asyncio
import json
import base64
from threading import Thread
from ditto_ros_msgs.msg import AssetMetadata, Alert, Relationship, MachineStatus
from geometry_msgs.msg import Point
from sensor_msgs.msg import Temperature, Imu
from std_msgs.msg import Float64, String

class DittoROS2Bridge(Node):
    def __init__(self):
        super().__init__('ditto_ros_bridge')
        
        # ROS 2 Publishers
        self.asset_metadata_pub = self.create_publisher(AssetMetadata, '/asset/metadata', 10)
        self.location_pub = self.create_publisher(Point, '/asset/location', 10)
        self.temperature_pub = self.create_publisher(Temperature, '/sensor/temperature', 10)
        self.imu_pub = self.create_publisher(Imu, '/sensor/imu', 10)
        self.energy_pub = self.create_publisher(Float64, '/sensor/energy', 10)
        self.alert_pub = self.create_publisher(Alert, '/alerts', 10)
        self.relationship_pub = self.create_publisher(Relationship, '/asset/relationships', 10)
        self.machine_status_pub = self.create_publisher(MachineStatus, '/machine/status', 10)
        
        # Parameters
        self.declare_parameter('ditto_host', 'localhost')
        self.declare_parameter('ditto_port', 8080)
        self.declare_parameter('ditto_username', 'ditto')
        self.declare_parameter('ditto_password', 'ditto')
        self.declare_parameter('ditto_namespaces', 'org.smartcity,com.manufacturing')
        self.declare_parameter('debug', True)
        
        self.host = self.get_parameter('ditto_host').value
        self.port = self.get_parameter('ditto_port').value
        self.namespaces = self.get_parameter('ditto_namespaces').value
        self.base_url = f"http://{self.host}:{self.port}/api/2"
        
        self.username = self.get_parameter('ditto_username').value
        self.password = self.get_parameter('ditto_password').value
        self.debug = self.get_parameter('debug').value
        
        # Start SSE thread
        self.sse_thread = Thread(target=self.run_sse)
        self.sse_thread.daemon = True
        self.sse_thread.start()

    def run_sse(self):
        loop = asyncio.new_event_loop()
        asyncio.set_event_loop(loop)
        loop.run_until_complete(self.subscribe_to_changes())

    async def subscribe_to_changes(self):
        headers = {
            'Accept': 'text/event-stream',
            'Authorization': f'Basic {self.get_basic_auth()}'
        }
        sse_url = f"{self.base_url}/things?namespaces={self.namespaces}&fields=thingId,attributes,features"
        
        while rclpy.ok():
            try:
                self.get_logger().info(f"Connecting to SSE stream: {sse_url}")
                async with aiohttp.ClientSession() as session:
                    async with session.get(sse_url, headers=headers) as response:
                        if response.status != 200:
                            self.get_logger().error(f"Failed to connect to SSE stream. Status: {response.status}")
                            await asyncio.sleep(5)
                            continue
                        
                        self.get_logger().info("Connected to SSE stream. Waiting for events...")
                        async for event in self.sse_parse(response.content):
                            if self.debug:
                                self.get_logger().debug(f"Received event: {event}")
                            if 'data' in event:
                                try:
                                    thing_data = json.loads(event['data'])
                                    await self.process_thing(thing_data)
                                except json.JSONDecodeError:
                                    if event['data'] != "":  # Ignore empty data
                                        self.get_logger().warn(f"Received non-JSON data: {event['data']}")
            except Exception as e:
                self.get_logger().error(f"Error in SSE connection: {str(e)}")
            
            self.get_logger().info("SSE connection closed. Reconnecting in 5 seconds...")
            await asyncio.sleep(5)  # Wait before reconnecting

    async def sse_parse(self, content):
        buffer = ""
        async for line in content:
            line = line.decode('utf-8').strip()
            if line:
                buffer += line + "\n"
            else:
                if buffer:
                    event = {}
                    for line in buffer.split("\n"):
                        if ":" in line:
                            key, value = line.split(":", 1)
                            event[key.strip()] = value.strip()
                    if event:
                        yield event
                    buffer = ""

    def get_basic_auth(self):
        return base64.b64encode(f"{self.username}:{self.password}".encode()).decode()

    async def process_thing(self, thing: dict):
        try:
            if self.debug:
                self.get_logger().debug(f"Processing thing: {json.dumps(thing, indent=2)}")
            
            thing_id = thing.get('thingId', '')
            attributes = thing.get('attributes', {})
            features = thing.get('features', {})

            # Process attributes (metadata and location)
            if 'location' in attributes:
                location = attributes['location']
                point_msg = Point()
                point_msg.x = float(location.get('longitude', 0.0))
                point_msg.y = float(location.get('latitude', 0.0))
                point_msg.z = float(location.get('elevation', 0.0))
                self.location_pub.publish(point_msg)

                metadata_msg = AssetMetadata()
                metadata_msg.asset_id = thing_id
                metadata_msg.type = attributes.get('asset_type', '')
                metadata_msg.location = point_msg
                self.asset_metadata_pub.publish(metadata_msg)

                self.get_logger().info(
                f"Published thing_id: {thing_id} : point_msg: {point_msg} : metadata_msg: {metadata_msg}"
                )
            # Process features (telemetry)
            if 'temperature' in features:
                temp = features['temperature'].get('properties', {})
                temp_msg = Temperature()
                temp_msg.temperature = float(temp.get('value', 0.0))
                self.temperature_pub.publish(temp_msg)

                self.get_logger().info(
                f"Published thing_id: {thing_id} : temp_msg: {temp_msg}"
                )
            if 'imu' in features:
                imu = features['imu'].get('properties', {})
                imu_msg = Imu()
                imu_msg.linear_acceleration.x = float(imu.get('accel_x', 0.0))
                imu_msg.linear_acceleration.y = float(imu.get('accel_y', 0.0))
                imu_msg.linear_acceleration.z = float(imu.get('accel_z', 0.0))
                imu_msg.angular_velocity.x = float(imu.get('gyro_x', 0.0))
                imu_msg.angular_velocity.y = float(imu.get('gyro_y', 0.0))
                imu_msg.angular_velocity.z = float(imu.get('gyro_z', 0.0))
                self.imu_pub.publish(imu_msg)
                
                self.get_logger().info(
                f"Published thing_id: {thing_id} : imu_msg: {imu_msg}"
                )
            if 'energy' in features:
                energy = features['energy'].get('properties', {})
                energy_msg = Float64()
                energy_msg.consumption = float(energy.get('consumption', 0.0))
                self.energy_pub.publish(energy_msg)

                self.get_logger().info(
                f"Published thing_id: {thing_id} : energy_msg: {energy_msg}"
                )
            # Process live messages (alerts)
            if 'inbox' in features:
                inbox = features['inbox'].get('properties', {})
                for message_id, message in inbox.items():
                    alert_msg = Alert()
                    alert_msg.message = f"{thing_id}:{message.get('type', 'unknown')}"
                    alert_msg.severity = int(message.get('severity', 0))
                    self.alert_pub.publish(alert_msg)
                    self.get_logger().info(
                    f"Published thing_id: {thing_id} : alert_msg: {alert_msg}"
                    )
            # Process relationships
            if 'relationships' in features:
                relationships = features['relationships'].get('properties', {})
                for rel_type, rel_data in relationships.items():
                    rel_msg = Relationship()
                    rel_msg.parent_thing_id = thing_id
                    rel_msg.child_thing_id = rel_data.get('target', '')
                    rel_msg.relationship_type = rel_type
                    self.relationship_pub.publish(rel_msg)
                    self.get_logger().info(
                    f"Published thing_id: {thing_id} : rel_msg: {rel_msg}"
                    )
            # Process machine status (for manufacturing)
            if 'status' in features:
                status = features['status'].get('properties', {})
                status_msg = MachineStatus()
                status_msg.machine_id = thing_id
                status_msg.status = status.get('value', '')
                status_msg.uptime = float(status.get('uptime', 0.0))
                status_msg.efficiency = float(status.get('efficiency', 0.0))
                self.machine_status_pub.publish(status_msg)
                self.get_logger().info(
                f"Published thing_id: {thing_id} : status_msg: {status_msg}"
                )
            
        except Exception as e:
            self.get_logger().error(f"Error processing thing: {str(e)}")
            if self.debug:
                self.get_logger().debug(f"Thing that caused error: {json.dumps(thing, indent=2)}")

def main(args=None):
    rclpy.init(args=args)
    bridge = DittoROS2Bridge()
    
    try:
        rclpy.spin(bridge)
    except KeyboardInterrupt:
        pass
    finally:
        bridge.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()