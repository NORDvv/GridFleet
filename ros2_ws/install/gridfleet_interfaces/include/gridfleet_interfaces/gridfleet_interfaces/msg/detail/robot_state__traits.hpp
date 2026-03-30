// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gridfleet_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gridfleet_interfaces/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gridfleet_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: goal_x
  {
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << ", ";
  }

  // member: goal_y
  {
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << ", ";
  }

  // member: reached_goal
  {
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: goal_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << "\n";
  }

  // member: goal_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << "\n";
  }

  // member: reached_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gridfleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gridfleet_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gridfleet_interfaces::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  gridfleet_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gridfleet_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gridfleet_interfaces::msg::RobotState & msg)
{
  return gridfleet_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gridfleet_interfaces::msg::RobotState>()
{
  return "gridfleet_interfaces::msg::RobotState";
}

template<>
inline const char * name<gridfleet_interfaces::msg::RobotState>()
{
  return "gridfleet_interfaces/msg/RobotState";
}

template<>
struct has_fixed_size<gridfleet_interfaces::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gridfleet_interfaces::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gridfleet_interfaces::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
