// Generated by gencpp from file easy_handeye/TakeSample.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MESSAGE_TAKESAMPLE_H
#define EASY_HANDEYE_MESSAGE_TAKESAMPLE_H

#include <ros/service_traits.h>


#include <easy_handeye/TakeSampleRequest.h>
#include <easy_handeye/TakeSampleResponse.h>


namespace easy_handeye
{

struct TakeSample
{

typedef TakeSampleRequest Request;
typedef TakeSampleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TakeSample
} // namespace easy_handeye


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::easy_handeye::TakeSample > {
  static const char* value()
  {
    return "210f42647d67f4ed4a942dbfb5f51848";
  }

  static const char* value(const ::easy_handeye::TakeSample&) { return value(); }
};

template<>
struct DataType< ::easy_handeye::TakeSample > {
  static const char* value()
  {
    return "easy_handeye/TakeSample";
  }

  static const char* value(const ::easy_handeye::TakeSample&) { return value(); }
};


// service_traits::MD5Sum< ::easy_handeye::TakeSampleRequest> should match 
// service_traits::MD5Sum< ::easy_handeye::TakeSample > 
template<>
struct MD5Sum< ::easy_handeye::TakeSampleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye::TakeSample >::value();
  }
  static const char* value(const ::easy_handeye::TakeSampleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye::TakeSampleRequest> should match 
// service_traits::DataType< ::easy_handeye::TakeSample > 
template<>
struct DataType< ::easy_handeye::TakeSampleRequest>
{
  static const char* value()
  {
    return DataType< ::easy_handeye::TakeSample >::value();
  }
  static const char* value(const ::easy_handeye::TakeSampleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::easy_handeye::TakeSampleResponse> should match 
// service_traits::MD5Sum< ::easy_handeye::TakeSample > 
template<>
struct MD5Sum< ::easy_handeye::TakeSampleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye::TakeSample >::value();
  }
  static const char* value(const ::easy_handeye::TakeSampleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye::TakeSampleResponse> should match 
// service_traits::DataType< ::easy_handeye::TakeSample > 
template<>
struct DataType< ::easy_handeye::TakeSampleResponse>
{
  static const char* value()
  {
    return DataType< ::easy_handeye::TakeSample >::value();
  }
  static const char* value(const ::easy_handeye::TakeSampleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EASY_HANDEYE_MESSAGE_TAKESAMPLE_H
