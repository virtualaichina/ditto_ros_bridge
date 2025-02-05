#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import aiohttp
import asyncio
import json
import base64
from threading import Thread

from ditto_ros_msgs.msg import DittoThing
from geometry_msgs.msg import Vector3

class DittoROS2Bridge(Node):
    def __init__(self):
        super().__init__('ditto_ros_bridge')
        
        # ROS 2 Publisher
        self.publisher = self.create_publisher(
            DittoThing, 
            '/ditto/things', 
            10
        )
        
        # Parameters
        self.declare_parameter('ditto_host', 'localhost')
        self.declare_parameter('ditto_port', 8080)
        self.declare_parameter('ditto_username', 'ditto')
        self.declare_parameter('ditto_password', 'ditto')
        self.declare_parameter('ditto_namespace', 'org.eclipse.ditto.ttn.demo')
        self.declare_parameter('debug', True)
        
        self.host = self.get_parameter('ditto_host').value
        self.port = self.get_parameter('ditto_port').value
        self.namespace = self.get_parameter('ditto_namespace').value
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
        sse_url = f"{self.base_url}/things?namespaces={self.namespace}"
        
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
            
            # Create ROS message
            ros_msg = DittoThing()
            
            # Extract thing ID
            ros_msg.thing_id = thing.get('thingId', '')
            
            # Extract features
            features = thing.get('features', {})
            
            # Process all available attributes
            if "sensor" in features:
                sensor = features["sensor"].get("properties", {})
                ros_msg.temperature = float(sensor.get("temperature", 0.0))
                ros_msg.humidity = float(sensor.get("humidity", 0.0))
            
            if "location" in features:
                loc = features["location"].get("properties", {})
                ros_msg.position = Vector3(
                    x=float(loc.get("x", 0.0)),
                    y=float(loc.get("y", 0.0)),
                    z=float(loc.get("z", 0.0))
                )
            
            # Publish message
            self.publisher.publish(ros_msg)
            self.get_logger().info(
                f"Published thing_id: {ros_msg.thing_id} "
                f"temp: {ros_msg.temperature:.1f} "
                f"humidity: {ros_msg.humidity:.1f} "
                f"position: ({ros_msg.position.x:.1f}, {ros_msg.position.y:.1f}, {ros_msg.position.z:.1f})"
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

