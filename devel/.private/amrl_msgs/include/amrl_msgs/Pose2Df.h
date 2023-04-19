// Generated by gencpp from file amrl_msgs/Pose2Df.msg
// DO NOT EDIT!


#ifndef AMRL_MSGS_MESSAGE_POSE2DF_H
#define AMRL_MSGS_MESSAGE_POSE2DF_H


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
struct Pose2Df_
{
  typedef Pose2Df_<ContainerAllocator> Type;

  Pose2Df_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  Pose2Df_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;





  typedef boost::shared_ptr< ::amrl_msgs::Pose2Df_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::amrl_msgs::Pose2Df_<ContainerAllocator> const> ConstPtr;

}; // struct Pose2Df_

typedef ::amrl_msgs::Pose2Df_<std::allocator<void> > Pose2Df;

typedef boost::shared_ptr< ::amrl_msgs::Pose2Df > Pose2DfPtr;
typedef boost::shared_ptr< ::amrl_msgs::Pose2Df const> Pose2DfConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::amrl_msgs::Pose2Df_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::amrl_msgs::Pose2Df_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::amrl_msgs::Pose2Df_<ContainerAllocator1> & lhs, const ::amrl_msgs::Pose2Df_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.theta == rhs.theta;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::amrl_msgs::Pose2Df_<ContainerAllocator1> & lhs, const ::amrl_msgs::Pose2Df_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace amrl_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::Pose2Df_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::Pose2Df_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::Pose2Df_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::amrl_msgs::Pose2Df_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa130bc60ee651385ULL;
  static const uint64_t static_value2 = 0x5dc62ea83fcc5b20ULL;
};

template<class ContainerAllocator>
struct DataType< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
{
  static const char* value()
  {
    return "amrl_msgs/Pose2Df";
  }

  static const char* value(const ::amrl_msgs::Pose2Df_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 theta\n"
;
  }

  static const char* value(const ::amrl_msgs::Pose2Df_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pose2Df_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::amrl_msgs::Pose2Df_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::amrl_msgs::Pose2Df_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AMRL_MSGS_MESSAGE_POSE2DF_H