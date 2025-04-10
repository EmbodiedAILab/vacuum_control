// Generated by gencpp from file vr_teleoperation_msg/IKPoseResponse.msg
// DO NOT EDIT!


#ifndef VR_TELEOPERATION_MSG_MESSAGE_IKPOSERESPONSE_H
#define VR_TELEOPERATION_MSG_MESSAGE_IKPOSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vr_teleoperation_msg
{
template <class ContainerAllocator>
struct IKPoseResponse_
{
  typedef IKPoseResponse_<ContainerAllocator> Type;

  IKPoseResponse_()
    : joint_state()  {
    }
  IKPoseResponse_(const ContainerAllocator& _alloc)
    : joint_state(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _joint_state_type;
  _joint_state_type joint_state;





  typedef boost::shared_ptr< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IKPoseResponse_

typedef ::vr_teleoperation_msg::IKPoseResponse_<std::allocator<void> > IKPoseResponse;

typedef boost::shared_ptr< ::vr_teleoperation_msg::IKPoseResponse > IKPoseResponsePtr;
typedef boost::shared_ptr< ::vr_teleoperation_msg::IKPoseResponse const> IKPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator1> & lhs, const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator2> & rhs)
{
  return lhs.joint_state == rhs.joint_state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator1> & lhs, const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vr_teleoperation_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b66d62d17824da488405b2423b7ccb24";
  }

  static const char* value(const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb66d62d17824da48ULL;
  static const uint64_t static_value2 = 0x8405b2423b7ccb24ULL;
};

template<class ContainerAllocator>
struct DataType< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vr_teleoperation_msg/IKPoseResponse";
  }

  static const char* value(const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] joint_state\n"
;
  }

  static const char* value(const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IKPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vr_teleoperation_msg::IKPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "joint_state[]" << std::endl;
    for (size_t i = 0; i < v.joint_state.size(); ++i)
    {
      s << indent << "  joint_state[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_state[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VR_TELEOPERATION_MSG_MESSAGE_IKPOSERESPONSE_H
