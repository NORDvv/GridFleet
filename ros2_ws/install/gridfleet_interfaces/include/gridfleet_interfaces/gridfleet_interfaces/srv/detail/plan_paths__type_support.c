// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gridfleet_interfaces/srv/detail/plan_paths__rosidl_typesupport_introspection_c.h"
#include "gridfleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gridfleet_interfaces/srv/detail/plan_paths__functions.h"
#include "gridfleet_interfaces/srv/detail/plan_paths__struct.h"


// Include directives for member types
// Member `obstacle_xs`
// Member `obstacle_ys`
// Member `start_xs`
// Member `start_ys`
// Member `goal_xs`
// Member `goal_ys`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `robot_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gridfleet_interfaces__srv__PlanPaths_Request__init(message_memory);
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_fini_function(void * message_memory)
{
  gridfleet_interfaces__srv__PlanPaths_Request__fini(message_memory);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__obstacle_xs(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_xs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_xs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__obstacle_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_xs(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__obstacle_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_xs(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__obstacle_xs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__obstacle_ys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_ys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_ys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__obstacle_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_ys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__obstacle_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_ys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__obstacle_ys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__robot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__robot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__robot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__robot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__robot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__robot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__start_xs(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_xs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_xs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__start_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_xs(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__start_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_xs(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__start_xs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__start_ys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_ys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_ys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__start_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_ys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__start_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_ys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__start_ys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__goal_xs(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_xs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_xs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__goal_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_xs(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__goal_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_xs(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__goal_xs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__goal_ys(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_ys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_ys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__goal_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_ys(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__goal_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_ys(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__goal_ys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_member_array[9] = {
  {
    "map_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, map_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, map_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_xs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, obstacle_xs),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__obstacle_xs,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_xs,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_xs,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__obstacle_xs,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__obstacle_xs,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__obstacle_xs  // resize(index) function pointer
  },
  {
    "obstacle_ys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, obstacle_ys),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__obstacle_ys,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__obstacle_ys,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__obstacle_ys,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__obstacle_ys,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__obstacle_ys,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__obstacle_ys  // resize(index) function pointer
  },
  {
    "robot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, robot_ids),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__robot_ids,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__robot_ids,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__robot_ids,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__robot_ids,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__robot_ids,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__robot_ids  // resize(index) function pointer
  },
  {
    "start_xs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, start_xs),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__start_xs,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_xs,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_xs,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__start_xs,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__start_xs,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__start_xs  // resize(index) function pointer
  },
  {
    "start_ys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, start_ys),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__start_ys,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__start_ys,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__start_ys,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__start_ys,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__start_ys,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__start_ys  // resize(index) function pointer
  },
  {
    "goal_xs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, goal_xs),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__goal_xs,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_xs,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_xs,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__goal_xs,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__goal_xs,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__goal_xs  // resize(index) function pointer
  },
  {
    "goal_ys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Request, goal_ys),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__size_function__PlanPaths_Request__goal_ys,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Request__goal_ys,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__get_function__PlanPaths_Request__goal_ys,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Request__goal_ys,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Request__goal_ys,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Request__goal_ys  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_members = {
  "gridfleet_interfaces__srv",  // message namespace
  "PlanPaths_Request",  // message name
  9,  // number of fields
  sizeof(gridfleet_interfaces__srv__PlanPaths_Request),
  gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_member_array,  // message members
  gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_type_support_handle = {
  0,
  &gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gridfleet_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Request)() {
  if (!gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_type_support_handle.typesupport_identifier) {
    gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gridfleet_interfaces__srv__PlanPaths_Request__rosidl_typesupport_introspection_c__PlanPaths_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gridfleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__functions.h"
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__struct.h"


// Include directives for member types
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `paths`
#include "gridfleet_interfaces/msg/robot_path.h"
// Member `paths`
#include "gridfleet_interfaces/msg/detail/robot_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gridfleet_interfaces__srv__PlanPaths_Response__init(message_memory);
}

void gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_fini_function(void * message_memory)
{
  gridfleet_interfaces__srv__PlanPaths_Response__fini(message_memory);
}

size_t gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__size_function__PlanPaths_Response__paths(
  const void * untyped_member)
{
  const gridfleet_interfaces__msg__RobotPath__Sequence * member =
    (const gridfleet_interfaces__msg__RobotPath__Sequence *)(untyped_member);
  return member->size;
}

const void * gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Response__paths(
  const void * untyped_member, size_t index)
{
  const gridfleet_interfaces__msg__RobotPath__Sequence * member =
    (const gridfleet_interfaces__msg__RobotPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_function__PlanPaths_Response__paths(
  void * untyped_member, size_t index)
{
  gridfleet_interfaces__msg__RobotPath__Sequence * member =
    (gridfleet_interfaces__msg__RobotPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Response__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gridfleet_interfaces__msg__RobotPath * item =
    ((const gridfleet_interfaces__msg__RobotPath *)
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Response__paths(untyped_member, index));
  gridfleet_interfaces__msg__RobotPath * value =
    (gridfleet_interfaces__msg__RobotPath *)(untyped_value);
  *value = *item;
}

void gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Response__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gridfleet_interfaces__msg__RobotPath * item =
    ((gridfleet_interfaces__msg__RobotPath *)
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_function__PlanPaths_Response__paths(untyped_member, index));
  const gridfleet_interfaces__msg__RobotPath * value =
    (const gridfleet_interfaces__msg__RobotPath *)(untyped_value);
  *item = *value;
}

bool gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Response__paths(
  void * untyped_member, size_t size)
{
  gridfleet_interfaces__msg__RobotPath__Sequence * member =
    (gridfleet_interfaces__msg__RobotPath__Sequence *)(untyped_member);
  gridfleet_interfaces__msg__RobotPath__Sequence__fini(member);
  return gridfleet_interfaces__msg__RobotPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces__srv__PlanPaths_Response, paths),  // bytes offset in struct
    NULL,  // default value
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__size_function__PlanPaths_Response__paths,  // size() function pointer
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPaths_Response__paths,  // get_const(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__get_function__PlanPaths_Response__paths,  // get(index) function pointer
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPaths_Response__paths,  // fetch(index, &value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__assign_function__PlanPaths_Response__paths,  // assign(index, value) function pointer
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__resize_function__PlanPaths_Response__paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_members = {
  "gridfleet_interfaces__srv",  // message namespace
  "PlanPaths_Response",  // message name
  3,  // number of fields
  sizeof(gridfleet_interfaces__srv__PlanPaths_Response),
  gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_member_array,  // message members
  gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_type_support_handle = {
  0,
  &gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gridfleet_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Response)() {
  gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, msg, RobotPath)();
  if (!gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_type_support_handle.typesupport_identifier) {
    gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gridfleet_interfaces__srv__PlanPaths_Response__rosidl_typesupport_introspection_c__PlanPaths_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gridfleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_members = {
  "gridfleet_interfaces__srv",  // service namespace
  "PlanPaths",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_Request_message_type_support_handle,
  NULL  // response message
  // gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_Response_message_type_support_handle
};

static rosidl_service_type_support_t gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_type_support_handle = {
  0,
  &gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gridfleet_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths)() {
  if (!gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_type_support_handle.typesupport_identifier) {
    gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gridfleet_interfaces, srv, PlanPaths_Response)()->data;
  }

  return &gridfleet_interfaces__srv__detail__plan_paths__rosidl_typesupport_introspection_c__PlanPaths_service_type_support_handle;
}
