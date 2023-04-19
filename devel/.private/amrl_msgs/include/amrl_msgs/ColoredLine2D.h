// Generated by gencpp from file amrl_msgs/ColoredLine2D.msg
// DO NOT EDIT!


#ifndef AMRL_MSGS_MESSAGE_COLOREDLINE2D_H
#define AMRL_MSGS_MESSAGE_COLOREDLINE2D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <amrl_msgs/Point2D.h>
#include <amrl_msgs/Point2D.h>

namespace amrl_msgs
{
template <class ContainerAllocator>
struct ColoredLine2D_
{
  typedef ColoredLine2D_<ContainerAllocator> Type;

  ColoredLine2D_()
    : p0()
    , p1()
    , color(0)  {
    }
  ColoredLine2D_(const ContainerAllocator& _alloc)
    : p0(_alloc)
    , p1(_alloc)
    , color(0)  {
  (void)_alloc;
    }



   typedef  ::amrl_msgs::Point2D_<ContainerAllocator>  _p0_type;
  _p0_type p0;

   typedef  ::amrl_msgs::Point2D_<ContainerAllocator>  _p1_type;
  _p1_type p1;

   typedef uint32_t _color_type;
  _color_type color;





  typedef boost::shared_ptr< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> const> ConstPtr;

}; // struct ColoredLine2D_

typedef ::amrl_msgs::ColoredLine2D_<std::allocator<void> > ColoredLine2D;

typedef boost::shared_ptr< ::amrl_msgs::ColoredLine2D > ColoredLine2DPtr;
typedef boost::shared_ptr< ::amrl_msgs::ColoredLine2D const> ColoredLine2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::amrl_msgs::ColoredLine2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::amrl_msgs::ColoredLine2D_<ContainerAllocator1> & lhs, const ::amrl_msgs::ColoredLine2D_<ContainerAllocator2> & rhs)
{
  return lhs.p0 == rhs.p0 &&
    lhs.p1 == rhs.p1 &&
    lhs.color == rhs.color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::amrl_msgs::ColoredLine2D_<ContainerAllocator1> & lhs, const ::amrl_msgs::ColoredLine2D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace amrl_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f09bffbeb5ba52952062cabb27c95439";
  }

  static const char* value(const ::amrl_msgs::ColoredLine2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf09bffbeb5ba5295ULL;
  static const uint64_t static_value2 = 0x2062cabb27c95439ULL;
};

template<class ContainerAllocator>
struct DataType< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "amrl_msgs/ColoredLine2D";
  }

  static const char* value(const ::amrl_msgs::ColoredLine2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Point2D p0\n"
"Point2D p1\n"
"uint32 color\n"
"\n"
"================================================================================\n"
"MSG: amrl_msgs/Point2D\n"
"float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::amrl_msgs::ColoredLine2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p0);
      stream.next(m.p1);
      stream.next(m.color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ColoredLine2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::amrl_msgs::ColoredLine2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::amrl_msgs::ColoredLine2D_<ContainerAllocator>& v)
  {
    s << indent << "p0: ";
    s << std::endl;
    Printer< ::amrl_msgs::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.p0);
    s << indent << "p1: ";
    s << std::endl;
    Printer< ::amrl_msgs::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.p1);
    s << indent << "color: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AMRL_MSGS_MESSAGE_COLOREDLINE2D_H