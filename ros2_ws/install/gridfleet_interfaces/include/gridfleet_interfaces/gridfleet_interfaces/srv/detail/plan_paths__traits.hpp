// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__TRAITS_HPP_
#define GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gridfleet_interfaces/srv/detail/plan_paths__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gridfleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPaths_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_width
  {
    out << "map_width: ";
    rosidl_generator_traits::value_to_yaml(msg.map_width, out);
    out << ", ";
  }

  // member: map_height
  {
    out << "map_height: ";
    rosidl_generator_traits::value_to_yaml(msg.map_height, out);
    out << ", ";
  }

  // member: obstacle_xs
  {
    if (msg.obstacle_xs.size() == 0) {
      out << "obstacle_xs: []";
    } else {
      out << "obstacle_xs: [";
      size_t pending_items = msg.obstacle_xs.size();
      for (auto item : msg.obstacle_xs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacle_ys
  {
    if (msg.obstacle_ys.size() == 0) {
      out << "obstacle_ys: []";
    } else {
      out << "obstacle_ys: [";
      size_t pending_items = msg.obstacle_ys.size();
      for (auto item : msg.obstacle_ys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_ids
  {
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []";
    } else {
      out << "robot_ids: [";
      size_t pending_items = msg.robot_ids.size();
      for (auto item : msg.robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_xs
  {
    if (msg.start_xs.size() == 0) {
      out << "start_xs: []";
    } else {
      out << "start_xs: [";
      size_t pending_items = msg.start_xs.size();
      for (auto item : msg.start_xs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_ys
  {
    if (msg.start_ys.size() == 0) {
      out << "start_ys: []";
    } else {
      out << "start_ys: [";
      size_t pending_items = msg.start_ys.size();
      for (auto item : msg.start_ys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_xs
  {
    if (msg.goal_xs.size() == 0) {
      out << "goal_xs: []";
    } else {
      out << "goal_xs: [";
      size_t pending_items = msg.goal_xs.size();
      for (auto item : msg.goal_xs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_ys
  {
    if (msg.goal_ys.size() == 0) {
      out << "goal_ys: []";
    } else {
      out << "goal_ys: [";
      size_t pending_items = msg.goal_ys.size();
      for (auto item : msg.goal_ys) {
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
  const PlanPaths_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_width: ";
    rosidl_generator_traits::value_to_yaml(msg.map_width, out);
    out << "\n";
  }

  // member: map_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_height: ";
    rosidl_generator_traits::value_to_yaml(msg.map_height, out);
    out << "\n";
  }

  // member: obstacle_xs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_xs.size() == 0) {
      out << "obstacle_xs: []\n";
    } else {
      out << "obstacle_xs:\n";
      for (auto item : msg.obstacle_xs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obstacle_ys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_ys.size() == 0) {
      out << "obstacle_ys: []\n";
    } else {
      out << "obstacle_ys:\n";
      for (auto item : msg.obstacle_ys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []\n";
    } else {
      out << "robot_ids:\n";
      for (auto item : msg.robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_xs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_xs.size() == 0) {
      out << "start_xs: []\n";
    } else {
      out << "start_xs:\n";
      for (auto item : msg.start_xs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_ys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_ys.size() == 0) {
      out << "start_ys: []\n";
    } else {
      out << "start_ys:\n";
      for (auto item : msg.start_ys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_xs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_xs.size() == 0) {
      out << "goal_xs: []\n";
    } else {
      out << "goal_xs:\n";
      for (auto item : msg.goal_xs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_ys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_ys.size() == 0) {
      out << "goal_ys: []\n";
    } else {
      out << "goal_ys:\n";
      for (auto item : msg.goal_ys) {
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

inline std::string to_yaml(const PlanPaths_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gridfleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gridfleet_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gridfleet_interfaces::srv::PlanPaths_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gridfleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gridfleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gridfleet_interfaces::srv::PlanPaths_Request & msg)
{
  return gridfleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gridfleet_interfaces::srv::PlanPaths_Request>()
{
  return "gridfleet_interfaces::srv::PlanPaths_Request";
}

template<>
inline const char * name<gridfleet_interfaces::srv::PlanPaths_Request>()
{
  return "gridfleet_interfaces/srv/PlanPaths_Request";
}

template<>
struct has_fixed_size<gridfleet_interfaces::srv::PlanPaths_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gridfleet_interfaces::srv::PlanPaths_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gridfleet_interfaces::srv::PlanPaths_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'paths'
#include "gridfleet_interfaces/msg/detail/robot_path__traits.hpp"

namespace gridfleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPaths_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: paths
  {
    if (msg.paths.size() == 0) {
      out << "paths: []";
    } else {
      out << "paths: [";
      size_t pending_items = msg.paths.size();
      for (auto item : msg.paths) {
        to_flow_style_yaml(item, out);
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
  const PlanPaths_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.paths.size() == 0) {
      out << "paths: []\n";
    } else {
      out << "paths:\n";
      for (auto item : msg.paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPaths_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gridfleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gridfleet_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gridfleet_interfaces::srv::PlanPaths_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gridfleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gridfleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gridfleet_interfaces::srv::PlanPaths_Response & msg)
{
  return gridfleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gridfleet_interfaces::srv::PlanPaths_Response>()
{
  return "gridfleet_interfaces::srv::PlanPaths_Response";
}

template<>
inline const char * name<gridfleet_interfaces::srv::PlanPaths_Response>()
{
  return "gridfleet_interfaces/srv/PlanPaths_Response";
}

template<>
struct has_fixed_size<gridfleet_interfaces::srv::PlanPaths_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gridfleet_interfaces::srv::PlanPaths_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gridfleet_interfaces::srv::PlanPaths_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gridfleet_interfaces::srv::PlanPaths>()
{
  return "gridfleet_interfaces::srv::PlanPaths";
}

template<>
inline const char * name<gridfleet_interfaces::srv::PlanPaths>()
{
  return "gridfleet_interfaces/srv/PlanPaths";
}

template<>
struct has_fixed_size<gridfleet_interfaces::srv::PlanPaths>
  : std::integral_constant<
    bool,
    has_fixed_size<gridfleet_interfaces::srv::PlanPaths_Request>::value &&
    has_fixed_size<gridfleet_interfaces::srv::PlanPaths_Response>::value
  >
{
};

template<>
struct has_bounded_size<gridfleet_interfaces::srv::PlanPaths>
  : std::integral_constant<
    bool,
    has_bounded_size<gridfleet_interfaces::srv::PlanPaths_Request>::value &&
    has_bounded_size<gridfleet_interfaces::srv::PlanPaths_Response>::value
  >
{
};

template<>
struct is_service<gridfleet_interfaces::srv::PlanPaths>
  : std::true_type
{
};

template<>
struct is_service_request<gridfleet_interfaces::srv::PlanPaths_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gridfleet_interfaces::srv::PlanPaths_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__TRAITS_HPP_
