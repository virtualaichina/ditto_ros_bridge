cmake_minimum_required(VERSION 3.8)
project(ditto_ros_msgs)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
  "msg/AssetMetadata.msg"
  "msg/Alert.msg"
  "msg/Relationship.msg"
  "msg/MachineStatus.msg"
  "msg/CropData.msg"
  "msg/EnergyConsumption.msg"
  "msg/EnvironmentalData.msg"
  "msg/ProductionLine.msg"
  "msg/TrafficData.msg"
  "msg/WaterManagement.msg"
  "msg/Temperature.msg"
  "msg/Pressure.msg"
  "msg/Humidity.msg"
  "msg/Imu.msg"
  "msg/TrafficLight.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES geometry_msgs std_msgs
)

ament_package()