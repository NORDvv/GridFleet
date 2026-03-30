// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gridfleet_interfaces:msg/RobotPath.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_H_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_H_

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
// Member 'xs'
// Member 'ys'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotPath in the package gridfleet_interfaces.
typedef struct gridfleet_interfaces__msg__RobotPath
{
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__int32__Sequence xs;
  rosidl_runtime_c__int32__Sequence ys;
} gridfleet_interfaces__msg__RobotPath;

// Struct for a sequence of gridfleet_interfaces__msg__RobotPath.
typedef struct gridfleet_interfaces__msg__RobotPath__Sequence
{
  gridfleet_interfaces__msg__RobotPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gridfleet_interfaces__msg__RobotPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_H_
