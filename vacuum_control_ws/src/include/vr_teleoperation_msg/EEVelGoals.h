// Generated by gencpp from file vr_teleoperation_msg/EEVelGoals.msg
// DO NOT EDIT!


#ifndef VR_TELEOPERATION_MSG_MESSAGE_EEVELGOALS_H
#define VR_TELEOPERATION_MSG_MESSAGE_EEVELGOALS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Twist.h>

namespace vr_teleoperation_msg
{
template <class ContainerAllocator>
struct EEVelGoals_
{
  typedef EEVelGoals_<ContainerAllocator> Type;

  EEVelGoals_()
    : header()
    , ee_vels()
    , tolerances()  {
    }
  EEVelGoals_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ee_vels(_alloc)
    , tolerances(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Twist_<ContainerAllocator> >> _ee_vels_type;
  _ee_vels_type ee_vels;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Twist_<ContainerAllocator> >> _tolerances_type;
  _tolerances_type tolerances;





  typedef boost::shared_ptr< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> const> ConstPtr;

}; // struct EEVelGoals_

typedef ::vr_teleoperation_msg::EEVelGoals_<std::allocator<void> > EEVelGoals;

typedef boost::shared_ptr< ::vr_teleoperation_msg::EEVelGoals > EEVelGoalsPtr;
typedef boost::shared_ptr< ::vr_teleoperation_msg::EEVelGoals const> EEVelGoalsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator1> & lhs, const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ee_vels == rhs.ee_vels &&
    lhs.tolerances == rhs.tolerances;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator1> & lhs, const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vr_teleoperation_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "73a8278b72bc91801a6231533cba27f3";
  }

  static const char* value(const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x73a8278b72bc9180ULL;
  static const uint64_t static_value2 = 0x1a6231533cba27f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vr_teleoperation_msg/EEVelGoals";
  }

  static const char* value(const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"geometry_msgs/Twist[] ee_vels\n"
"geometry_msgs/Twist[] tolerances\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ee_vels);
      stream.next(m.tolerances);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EEVelGoals_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vr_teleoperation_msg::EEVelGoals_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ee_vels[]" << std::endl;
    for (size_t i = 0; i < v.ee_vels.size(); ++i)
    {
      s << indent << "  ee_vels[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.ee_vels[i]);
    }
    s << indent << "tolerances[]" << std::endl;
    for (size_t i = 0; i < v.tolerances.size(); ++i)
    {
      s << indent << "  tolerances[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.tolerances[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VR_TELEOPERATION_MSG_MESSAGE_EEVELGOALS_H
