cmake_minimum_required(VERSION 3.0.2)
project(vacuum_control)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf
  geometry_msgs
  serial
  message_generation
)

add_message_files(
  FILES
  VrPose.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(vacuum_status_pub src/vacuum_status_pub.cpp)
target_link_libraries(vacuum_status_pub ${catkin_LIBRARIES})

add_executable(vacuum_status_pub_VR src/vacuum_status_pub_VR.cpp)
target_link_libraries(vacuum_status_pub_VR ${catkin_LIBRARIES})