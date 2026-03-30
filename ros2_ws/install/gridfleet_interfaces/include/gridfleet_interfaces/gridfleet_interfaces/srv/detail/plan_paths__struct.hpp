// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_HPP_
#define GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Request __attribute__((deprecated))
#else
# define DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Request __declspec(deprecated)
#endif

namespace gridfleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPaths_Request_
{
  using Type = PlanPaths_Request_<ContainerAllocator>;

  explicit PlanPaths_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_width = 0l;
      this->map_height = 0l;
    }
  }

  explicit PlanPaths_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_width = 0l;
      this->map_height = 0l;
    }
  }

  // field types and members
  using _map_width_type =
    int32_t;
  _map_width_type map_width;
  using _map_height_type =
    int32_t;
  _map_height_type map_height;
  using _obstacle_xs_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _obstacle_xs_type obstacle_xs;
  using _obstacle_ys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _obstacle_ys_type obstacle_ys;
  using _robot_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _robot_ids_type robot_ids;
  using _start_xs_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _start_xs_type start_xs;
  using _start_ys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _start_ys_type start_ys;
  using _goal_xs_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _goal_xs_type goal_xs;
  using _goal_ys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _goal_ys_type goal_ys;

  // setters for named parameter idiom
  Type & set__map_width(
    const int32_t & _arg)
  {
    this->map_width = _arg;
    return *this;
  }
  Type & set__map_height(
    const int32_t & _arg)
  {
    this->map_height = _arg;
    return *this;
  }
  Type & set__obstacle_xs(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->obstacle_xs = _arg;
    return *this;
  }
  Type & set__obstacle_ys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->obstacle_ys = _arg;
    return *this;
  }
  Type & set__robot_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->robot_ids = _arg;
    return *this;
  }
  Type & set__start_xs(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->start_xs = _arg;
    return *this;
  }
  Type & set__start_ys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->start_ys = _arg;
    return *this;
  }
  Type & set__goal_xs(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->goal_xs = _arg;
    return *this;
  }
  Type & set__goal_ys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->goal_ys = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Request
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Request
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPaths_Request_ & other) const
  {
    if (this->map_width != other.map_width) {
      return false;
    }
    if (this->map_height != other.map_height) {
      return false;
    }
    if (this->obstacle_xs != other.obstacle_xs) {
      return false;
    }
    if (this->obstacle_ys != other.obstacle_ys) {
      return false;
    }
    if (this->robot_ids != other.robot_ids) {
      return false;
    }
    if (this->start_xs != other.start_xs) {
      return false;
    }
    if (this->start_ys != other.start_ys) {
      return false;
    }
    if (this->goal_xs != other.goal_xs) {
      return false;
    }
    if (this->goal_ys != other.goal_ys) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPaths_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPaths_Request_

// alias to use template instance with default allocator
using PlanPaths_Request =
  gridfleet_interfaces::srv::PlanPaths_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gridfleet_interfaces


// Include directives for member types
// Member 'paths'
#include "gridfleet_interfaces/msg/detail/robot_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Response __attribute__((deprecated))
#else
# define DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Response __declspec(deprecated)
#endif

namespace gridfleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPaths_Response_
{
  using Type = PlanPaths_Response_<ContainerAllocator>;

  explicit PlanPaths_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit PlanPaths_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _paths_type =
    std::vector<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>>;
  _paths_type paths;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__paths(
    const std::vector<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>> & _arg)
  {
    this->paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Response
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gridfleet_interfaces__srv__PlanPaths_Response
    std::shared_ptr<gridfleet_interfaces::srv::PlanPaths_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPaths_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->paths != other.paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPaths_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPaths_Response_

// alias to use template instance with default allocator
using PlanPaths_Response =
  gridfleet_interfaces::srv::PlanPaths_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gridfleet_interfaces

namespace gridfleet_interfaces
{

namespace srv
{

struct PlanPaths
{
  using Request = gridfleet_interfaces::srv::PlanPaths_Request;
  using Response = gridfleet_interfaces::srv::PlanPaths_Response;
};

}  // namespace srv

}  // namespace gridfleet_interfaces

#endif  // GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__STRUCT_HPP_
