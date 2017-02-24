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
 * Auto-generated by genmsg_cpp from file /home/aauship/aauship-formation/code/hli/ros/src/aauship/msg/BatteryMonitor.msg
 *
 */


#ifndef AAUSHIP_MESSAGE_BATTERYMONITOR_H
#define AAUSHIP_MESSAGE_BATTERYMONITOR_H


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
struct BatteryMonitor_
{
  typedef BatteryMonitor_<ContainerAllocator> Type;

  BatteryMonitor_()
    : bank1()
    , bank2()  {
      bank1.assign(0.0);

      bank2.assign(0.0);
  }
  BatteryMonitor_(const ContainerAllocator& _alloc)
    : bank1()
    , bank2()  {
      bank1.assign(0.0);

      bank2.assign(0.0);
  }



   typedef boost::array<float, 4>  _bank1_type;
  _bank1_type bank1;

   typedef boost::array<float, 4>  _bank2_type;
  _bank2_type bank2;




  typedef boost::shared_ptr< ::aauship::BatteryMonitor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aauship::BatteryMonitor_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryMonitor_

typedef ::aauship::BatteryMonitor_<std::allocator<void> > BatteryMonitor;

typedef boost::shared_ptr< ::aauship::BatteryMonitor > BatteryMonitorPtr;
typedef boost::shared_ptr< ::aauship::BatteryMonitor const> BatteryMonitorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aauship::BatteryMonitor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aauship::BatteryMonitor_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::aauship::BatteryMonitor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aauship::BatteryMonitor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::BatteryMonitor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::BatteryMonitor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::BatteryMonitor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::BatteryMonitor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aauship::BatteryMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a4c3b0a55a6c04019bd839017fb8d1f";
  }

  static const char* value(const ::aauship::BatteryMonitor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2a4c3b0a55a6c040ULL;
  static const uint64_t static_value2 = 0x19bd839017fb8d1fULL;
};

template<class ContainerAllocator>
struct DataType< ::aauship::BatteryMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aauship/BatteryMonitor";
  }

  static const char* value(const ::aauship::BatteryMonitor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aauship::BatteryMonitor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is the message format for the battery monitor for the AAUSHIP\n\
float32[4] bank1\n\
float32[4] bank2\n\
";
  }

  static const char* value(const ::aauship::BatteryMonitor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aauship::BatteryMonitor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bank1);
      stream.next(m.bank2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BatteryMonitor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aauship::BatteryMonitor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aauship::BatteryMonitor_<ContainerAllocator>& v)
  {
    s << indent << "bank1[]" << std::endl;
    for (size_t i = 0; i < v.bank1.size(); ++i)
    {
      s << indent << "  bank1[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.bank1[i]);
    }
    s << indent << "bank2[]" << std::endl;
    for (size_t i = 0; i < v.bank2.size(); ++i)
    {
      s << indent << "  bank2[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.bank2[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AAUSHIP_MESSAGE_BATTERYMONITOR_H
