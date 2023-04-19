// Generated by gencpp from file amrl_msgs/ElevatorCommand.msg
// DO NOT EDIT!


#ifndef AMRL_MSGS_MESSAGE_ELEVATORCOMMAND_H
#define AMRL_MSGS_MESSAGE_ELEVATORCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace amrl_msgs
{
template <class ContainerAllocator>
struct ElevatorCommand_
{
  typedef ElevatorCommand_<ContainerAllocator> Type;

  ElevatorCommand_()
    : floor_cmd(0)
    , hold_door(false)  {
    }
  ElevatorCommand_(const ContainerAllocator& _alloc)
    : floor_cmd(0)
    , hold_door(false)  {
  (void)_alloc;
    }



   typedef uint8_t _floor_cmd_type;
  _floor_cmd_type floor_cmd;

   typedef uint8_t _hold_door_type;
  _hold_door_type hold_door;





  typedef boost::shared_ptr< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ElevatorCommand_

typedef ::amrl_msgs::ElevatorCommand_<std::allocator<void> > ElevatorCommand;

typedef boost::shared_ptr< ::amrl_msgs::ElevatorCommand > ElevatorCommandPtr;
typedef boost::shared_ptr< ::amrl_msgs::ElevatorCommand const> ElevatorCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::amrl_msgs::ElevatorCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::amrl_msgs::ElevatorCommand_<ContainerAllocator1> & lhs, const ::amrl_msgs::ElevatorCommand_<ContainerAllocator2> & rhs)
{
  return lhs.floor_cmd == rhs.floor_cmd &&
    lhs.hold_door == rhs.hold_door;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::amrl_msgs::ElevatorCommand_<ContainerAllocator1> & lhs, const ::amrl_msgs::ElevatorCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace amrl_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e156b9c54afb58ba637b3f6c1dff6ac4";
  }

  static const char* value(const ::amrl_msgs::ElevatorCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe156b9c54afb58baULL;
  static const uint64_t static_value2 = 0x637b3f6c1dff6ac4ULL;
};

template<class ContainerAllocator>
struct DataType< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "amrl_msgs/ElevatorCommand";
  }

  static const char* value(const ::amrl_msgs::ElevatorCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 floor_cmd\n"
"bool hold_door\n"
;
  }

  static const char* value(const ::amrl_msgs::ElevatorCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.floor_cmd);
      stream.next(m.hold_door);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ElevatorCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::amrl_msgs::ElevatorCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::amrl_msgs::ElevatorCommand_<ContainerAllocator>& v)
  {
    s << indent << "floor_cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.floor_cmd);
    s << indent << "hold_door: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hold_door);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AMRL_MSGS_MESSAGE_ELEVATORCOMMAND_H