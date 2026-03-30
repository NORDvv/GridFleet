// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_H_
#define GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacle_xs'
// Member 'obstacle_ys'
// Member 'start_xs'
// Member 'start_ys'
// Member 'goal_xs'
// Member 'goal_ys'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'robot_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanPaths in the package gridfleet_interfaces.
typedef struct gridfleet_interfaces__srv__PlanPaths_Request
{
  int32_t map_width;
  int32_t map_height;
  rosidl_runtime_c__int32__Sequence obstacle_xs;
  rosidl_runtime_c__int32__Sequence obstacle_ys;
  rosidl_runtime_c__String__Sequence robot_ids;
  rosidl_runtime_c__int32__Sequence start_xs;
  rosidl_runtime_c__int32__Sequence start_ys;
  rosidl_runtime_c__int32__Sequence goal_xs;
  rosidl_runtime_c__int32__Sequence goal_ys;
} gridfleet_interfaces__srv__PlanPaths_Request;

// Struct for a sequence of gridfleet_interfaces__srv__PlanPaths_Request.
typedef struct gridfleet_interfaces__srv__PlanPaths_Request__Sequence
{
  gridfleet_interfaces__srv__PlanPaths_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gridfleet_interfaces__srv__PlanPaths_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'paths'
#include "gridfleet_interfaces/msg/detail/robot_path__struct.h"

/// Struct defined in srv/PlanPaths in the package gridfleet_interfaces.
typedef struct gridfleet_interfaces__srv__PlanPaths_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  gridfleet_interfaces__msg__RobotPath__Sequence paths;
} gridfleet_interfaces__srv__PlanPaths_Response;

// Struct for a sequence of gridfleet_interfaces__srv__PlanPaths_Response.
typedef struct gridfleet_interfaces__srv__PlanPaths_Response__Sequence
{
  gridfleet_interfaces__srv__PlanPaths_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gridfleet_interfaces__srv__PlanPaths_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_H_
