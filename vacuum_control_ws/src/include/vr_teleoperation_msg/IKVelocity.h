// Generated by gencpp from file vr_teleoperation_msg/IKVelocity.msg
// DO NOT EDIT!


#ifndef VR_TELEOPERATION_MSG_MESSAGE_IKVELOCITY_H
#define VR_TELEOPERATION_MSG_MESSAGE_IKVELOCITY_H

#include <ros/service_traits.h>


#include <vr_teleoperation_msg/IKVelocityRequest.h>
#include <vr_teleoperation_msg/IKVelocityResponse.h>


namespace vr_teleoperation_msg
{

struct IKVelocity
{

typedef IKVelocityRequest Request;
typedef IKVelocityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct IKVelocity
} // namespace vr_teleoperation_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vr_teleoperation_msg::IKVelocity > {
  static const char* value()
  {
    return "1cf8f3ae381e7b061b1fe16f359a61d2";
  }

  static const char* value(const ::vr_teleoperation_msg::IKVelocity&) { return value(); }
};

template<>
struct DataType< ::vr_teleoperation_msg::IKVelocity > {
  static const char* value()
  {
    return "vr_teleoperation_msg/IKVelocity";
  }

  static const char* value(const ::vr_teleoperation_msg::IKVelocity&) { return value(); }
};


// service_traits::MD5Sum< ::vr_teleoperation_msg::IKVelocityRequest> should match
// service_traits::MD5Sum< ::vr_teleoperation_msg::IKVelocity >
template<>
struct MD5Sum< ::vr_teleoperation_msg::IKVelocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vr_teleoperation_msg::IKVelocity >::value();
  }
  static const char* value(const ::vr_teleoperation_msg::IKVelocityRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vr_teleoperation_msg::IKVelocityRequest> should match
// service_traits::DataType< ::vr_teleoperation_msg::IKVelocity >
template<>
struct DataType< ::vr_teleoperation_msg::IKVelocityRequest>
{
  static const char* value()
  {
    return DataType< ::vr_teleoperation_msg::IKVelocity >::value();
  }
  static const char* value(const ::vr_teleoperation_msg::IKVelocityRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vr_teleoperation_msg::IKVelocityResponse> should match
// service_traits::MD5Sum< ::vr_teleoperation_msg::IKVelocity >
template<>
struct MD5Sum< ::vr_teleoperation_msg::IKVelocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vr_teleoperation_msg::IKVelocity >::value();
  }
  static const char* value(const ::vr_teleoperation_msg::IKVelocityResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vr_teleoperation_msg::IKVelocityResponse> should match
// service_traits::DataType< ::vr_teleoperation_msg::IKVelocity >
template<>
struct DataType< ::vr_teleoperation_msg::IKVelocityResponse>
{
  static const char* value()
  {
    return DataType< ::vr_teleoperation_msg::IKVelocity >::value();
  }
  static const char* value(const ::vr_teleoperation_msg::IKVelocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VR_TELEOPERATION_MSG_MESSAGE_IKVELOCITY_H
