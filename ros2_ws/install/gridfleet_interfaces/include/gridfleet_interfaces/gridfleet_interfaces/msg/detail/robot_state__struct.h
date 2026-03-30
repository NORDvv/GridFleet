// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gridfleet_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotState in the package gridfleet_interfaces.
typedef struct gridfleet_interfaces__msg__RobotState
{
  rosidl_runtime_c__String robot_id;
  int32_t x;
  int32_t y;
  int32_t goal_x;
  int32_t goal_y;
  bool reached_goal;
} gridfleet_interfaces__msg__RobotState;

// Struct for a sequence of gridfleet_interfaces__msg__RobotState.
typedef struct gridfleet_interfaces__msg__RobotState__Sequence
{
  gridfleet_interfaces__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gridfleet_interfaces__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
