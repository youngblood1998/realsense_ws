// Generated by gencpp from file easy_handeye_msgs/HandeyeCalibration.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_HANDEYECALIBRATION_H
#define EASY_HANDEYE_MSGS_MESSAGE_HANDEYECALIBRATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>

namespace easy_handeye_msgs
{
template <class ContainerAllocator>
struct HandeyeCalibration_
{
  typedef HandeyeCalibration_<ContainerAllocator> Type;

  HandeyeCalibration_()
    : eye_on_hand(false)
    , transform()  {
    }
  HandeyeCalibration_(const ContainerAllocator& _alloc)
    : eye_on_hand(false)
    , transform(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _eye_on_hand_type;
  _eye_on_hand_type eye_on_hand;

   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _transform_type;
  _transform_type transform;





  typedef boost::shared_ptr< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> const> ConstPtr;

}; // struct HandeyeCalibration_

typedef ::easy_handeye_msgs::HandeyeCalibration_<std::allocator<void> > HandeyeCalibration;

typedef boost::shared_ptr< ::easy_handeye_msgs::HandeyeCalibration > HandeyeCalibrationPtr;
typedef boost::shared_ptr< ::easy_handeye_msgs::HandeyeCalibration const> HandeyeCalibrationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c81655aa3018f0ce549282933a2e9a4b";
  }

  static const char* value(const ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc81655aa3018f0ceULL;
  static const uint64_t static_value2 = 0x549282933a2e9a4bULL;
};

template<class ContainerAllocator>
struct DataType< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "easy_handeye_msgs/HandeyeCalibration";
  }

  static const char* value(const ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool eye_on_hand\n\
geometry_msgs/TransformStamped transform\n\
================================================================================\n\
MSG: geometry_msgs/TransformStamped\n\
# This expresses a transform from coordinate frame header.frame_id\n\
# to the coordinate frame child_frame_id\n\
#\n\
# This message is mostly used by the \n\
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n\
# See its documentation for more information.\n\
\n\
Header header\n\
string child_frame_id # the frame id of the child frame\n\
Transform transform\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
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

  static const char* value(const ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.eye_on_hand);
      stream.next(m.transform);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HandeyeCalibration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::easy_handeye_msgs::HandeyeCalibration_<ContainerAllocator>& v)
  {
    s << indent << "eye_on_hand: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.eye_on_hand);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_HANDEYECALIBRATION_H
