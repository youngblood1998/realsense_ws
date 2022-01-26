// Generated by gencpp from file easy_handeye_msgs/RemoveSampleResponse.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_REMOVESAMPLERESPONSE_H
#define EASY_HANDEYE_MSGS_MESSAGE_REMOVESAMPLERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <easy_handeye_msgs/SampleList.h>

namespace easy_handeye_msgs
{
template <class ContainerAllocator>
struct RemoveSampleResponse_
{
  typedef RemoveSampleResponse_<ContainerAllocator> Type;

  RemoveSampleResponse_()
    : samples()  {
    }
  RemoveSampleResponse_(const ContainerAllocator& _alloc)
    : samples(_alloc)  {
  (void)_alloc;
    }



   typedef  ::easy_handeye_msgs::SampleList_<ContainerAllocator>  _samples_type;
  _samples_type samples;





  typedef boost::shared_ptr< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RemoveSampleResponse_

typedef ::easy_handeye_msgs::RemoveSampleResponse_<std::allocator<void> > RemoveSampleResponse;

typedef boost::shared_ptr< ::easy_handeye_msgs::RemoveSampleResponse > RemoveSampleResponsePtr;
typedef boost::shared_ptr< ::easy_handeye_msgs::RemoveSampleResponse const> RemoveSampleResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace easy_handeye_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'easy_handeye_msgs': ['/home/jay/realsense_ws/src/easy_handeye/easy_handeye_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d95fb9676bbeca74481a1f545ed96b0";
  }

  static const char* value(const ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d95fb9676bbeca7ULL;
  static const uint64_t static_value2 = 0x4481a1f545ed96b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "easy_handeye_msgs/RemoveSampleResponse";
  }

  static const char* value(const ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SampleList samples\n\
\n\
================================================================================\n\
MSG: easy_handeye_msgs/SampleList\n\
geometry_msgs/Transform[] hand_world_samples\n\
geometry_msgs/Transform[] camera_marker_samples\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.samples);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RemoveSampleResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::easy_handeye_msgs::RemoveSampleResponse_<ContainerAllocator>& v)
  {
    s << indent << "samples: ";
    s << std::endl;
    Printer< ::easy_handeye_msgs::SampleList_<ContainerAllocator> >::stream(s, indent + "  ", v.samples);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_REMOVESAMPLERESPONSE_H
