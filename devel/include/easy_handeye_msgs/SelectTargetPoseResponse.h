// Generated by gencpp from file easy_handeye_msgs/SelectTargetPoseResponse.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_SELECTTARGETPOSERESPONSE_H
#define EASY_HANDEYE_MSGS_MESSAGE_SELECTTARGETPOSERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <easy_handeye_msgs/TargetPoseList.h>

namespace easy_handeye_msgs
{
template <class ContainerAllocator>
struct SelectTargetPoseResponse_
{
  typedef SelectTargetPoseResponse_<ContainerAllocator> Type;

  SelectTargetPoseResponse_()
    : success(false)
    , target_poses()  {
    }
  SelectTargetPoseResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , target_poses(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef  ::easy_handeye_msgs::TargetPoseList_<ContainerAllocator>  _target_poses_type;
  _target_poses_type target_poses;





  typedef boost::shared_ptr< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SelectTargetPoseResponse_

typedef ::easy_handeye_msgs::SelectTargetPoseResponse_<std::allocator<void> > SelectTargetPoseResponse;

typedef boost::shared_ptr< ::easy_handeye_msgs::SelectTargetPoseResponse > SelectTargetPoseResponsePtr;
typedef boost::shared_ptr< ::easy_handeye_msgs::SelectTargetPoseResponse const> SelectTargetPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17df88d590c97f9542d78673017227cb";
  }

  static const char* value(const ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17df88d590c97f95ULL;
  static const uint64_t static_value2 = 0x42d78673017227cbULL;
};

template<class ContainerAllocator>
struct DataType< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "easy_handeye_msgs/SelectTargetPoseResponse";
  }

  static const char* value(const ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
easy_handeye_msgs/TargetPoseList target_poses\n\
\n\
================================================================================\n\
MSG: easy_handeye_msgs/TargetPoseList\n\
geometry_msgs/PoseStamped home_pose\n\
geometry_msgs/PoseStamped[] target_poses\n\
int64 current_target_pose_index\n\
# TODO: add joint poses (which are what will actually be used)\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
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

  static const char* value(const ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.target_poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SelectTargetPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::easy_handeye_msgs::SelectTargetPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "target_poses: ";
    s << std::endl;
    Printer< ::easy_handeye_msgs::TargetPoseList_<ContainerAllocator> >::stream(s, indent + "  ", v.target_poses);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_SELECTTARGETPOSERESPONSE_H
