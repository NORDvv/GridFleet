// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gridfleet_interfaces:msg/RobotPath.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__TRAITS_HPP_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gridfleet_interfaces/msg/detail/robot_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gridfleet_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: xs
  {
    if (msg.xs.size() == 0) {
      out << "xs: []";
    } else {
      out << "xs: [";
      size_t pending_items = msg.xs.size();
      for (auto item : msg.xs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ys
  {
    if (msg.ys.size() == 0) {
      out << "ys: []";
    } else {
      out << "ys: [";
      size_t pending_items = msg.ys.size();
      for (auto item : msg.ys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPath & msg,
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

  // member: xs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xs.size() == 0) {
      out << "xs: []\n";
    } else {
      out << "xs:\n";
      for (auto item : msg.xs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ys.size() == 0) {
      out << "ys: []\n";
    } else {
      out << "ys:\n";
      for (auto item : msg.ys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPath & msg, bool use_flow_style = false)
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
  const gridfleet_interfaces::msg::RobotPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  gridfleet_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gridfleet_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gridfleet_interfaces::msg::RobotPath & msg)
{
  return gridfleet_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gridfleet_interfaces::msg::RobotPath>()
{
  return "gridfleet_interfaces::msg::RobotPath";
}

template<>
inline const char * name<gridfleet_interfaces::msg::RobotPath>()
{
  return "gridfleet_interfaces/msg/RobotPath";
}

template<>
struct has_fixed_size<gridfleet_interfaces::msg::RobotPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gridfleet_interfaces::msg::RobotPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gridfleet_interfaces::msg::RobotPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__TRAITS_HPP_
