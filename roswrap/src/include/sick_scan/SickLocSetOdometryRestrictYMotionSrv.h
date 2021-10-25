// Generated by gencpp from file sick_scan/SickLocSetOdometryRestrictYMotionSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYRESTRICTYMOTIONSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYRESTRICTYMOTIONSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocSetOdometryRestrictYMotionSrvRequest.h>
#include <sick_scan/SickLocSetOdometryRestrictYMotionSrvResponse.h>


namespace sick_scan
{

struct SickLocSetOdometryRestrictYMotionSrv
{

typedef SickLocSetOdometryRestrictYMotionSrvRequest Request;
typedef SickLocSetOdometryRestrictYMotionSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetOdometryRestrictYMotionSrv
} // namespace sick_scan


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv > {
  static const char* value()
  {
    return "83465e5956f4615e09223f5d055d1f12";
  }

  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetOdometryRestrictYMotionSrv";
  }

  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >
template<>
struct DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >
template<>
struct DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetOdometryRestrictYMotionSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryRestrictYMotionSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYRESTRICTYMOTIONSRV_H