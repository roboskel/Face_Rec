/* Auto-generated by genmsg_cpp for file /home/skel/roboskel_workspace/sandbox/face_rec/msg/faceData.msg */
#ifndef FACE_REC_MESSAGE_FACEDATA_H
#define FACE_REC_MESSAGE_FACEDATA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace face_rec
{
template <class ContainerAllocator>
struct faceData_ {
  typedef faceData_<ContainerAllocator> Type;

  faceData_()
  : id(0)
  , x(0)
  , y(0)
  , radius(0)
  {
  }

  faceData_(const ContainerAllocator& _alloc)
  : id(0)
  , x(0)
  , y(0)
  , radius(0)
  {
  }

  typedef int32_t _id_type;
  int32_t id;

  typedef int32_t _x_type;
  int32_t x;

  typedef int32_t _y_type;
  int32_t y;

  typedef int32_t _radius_type;
  int32_t radius;


  typedef boost::shared_ptr< ::face_rec::faceData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_rec::faceData_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct faceData
typedef  ::face_rec::faceData_<std::allocator<void> > faceData;

typedef boost::shared_ptr< ::face_rec::faceData> faceDataPtr;
typedef boost::shared_ptr< ::face_rec::faceData const> faceDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::face_rec::faceData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::face_rec::faceData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace face_rec

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::face_rec::faceData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::face_rec::faceData_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::face_rec::faceData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9d78cd3dd34909f2879f340cd9e32ba3";
  }

  static const char* value(const  ::face_rec::faceData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9d78cd3dd34909f2ULL;
  static const uint64_t static_value2 = 0x879f340cd9e32ba3ULL;
};

template<class ContainerAllocator>
struct DataType< ::face_rec::faceData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "face_rec/faceData";
  }

  static const char* value(const  ::face_rec::faceData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::face_rec::faceData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "  int32 id\n\
  int32 x\n\
  int32 y\n\
  int32 radius\n\
\n\
";
  }

  static const char* value(const  ::face_rec::faceData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::face_rec::faceData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::face_rec::faceData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.radius);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct faceData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_rec::faceData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::face_rec::faceData_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "radius: ";
    Printer<int32_t>::stream(s, indent + "  ", v.radius);
  }
};


} // namespace message_operations
} // namespace ros

#endif // FACE_REC_MESSAGE_FACEDATA_H
