/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/aauship/aauship-formation/code/hli/ros/src/aauship/msg/Attitude.msg
 *
 */


#ifndef AAUSHIP_MESSAGE_ATTITUDE_H
#define AAUSHIP_MESSAGE_ATTITUDE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aauship
{
template <class ContainerAllocator>
struct Attitude_
{
  typedef Attitude_<ContainerAllocator> Type;

  Attitude_()
    : pitch(0.0)
    , roll(0.0)
    , yaw(0.0)  {
    }
  Attitude_(const ContainerAllocator& _alloc)
    : pitch(0.0)
    , roll(0.0)
    , yaw(0.0)  {
    }



   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _yaw_type;
  _yaw_type yaw;




  typedef boost::shared_ptr< ::aauship::Attitude_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aauship::Attitude_<ContainerAllocator> const> ConstPtr;

}; // struct Attitude_

typedef ::aauship::Attitude_<std::allocator<void> > Attitude;

typedef boost::shared_ptr< ::aauship::Attitude > AttitudePtr;
typedef boost::shared_ptr< ::aauship::Attitude const> AttitudeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aauship::Attitude_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aauship::Attitude_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aauship

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'aauship': ['/home/aauship/aauship-formation/code/hli/ros/src/aauship/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aauship::Attitude_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aauship::Attitude_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::Attitude_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::Attitude_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::Attitude_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::Attitude_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aauship::Attitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da3691d617cf6ed55be8bea5c4931fd8";
  }

  static const char* value(const ::aauship::Attitude_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda3691d617cf6ed5ULL;
  static const uint64_t static_value2 = 0x5be8bea5c4931fd8ULL;
};

template<class ContainerAllocator>
struct DataType< ::aauship::Attitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aauship/Attitude";
  }

  static const char* value(const ::aauship::Attitude_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aauship::Attitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Attitude\n\
float64 pitch\n\
float64 roll\n\
float64 yaw\n\
";
  }

  static const char* value(const ::aauship::Attitude_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aauship::Attitude_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Attitude_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aauship::Attitude_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aauship::Attitude_<ContainerAllocator>& v)
  {
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AAUSHIP_MESSAGE_ATTITUDE_H
