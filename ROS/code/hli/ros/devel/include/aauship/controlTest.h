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
 * Auto-generated by genmsg_cpp from file /home/aauship/aauship-formation/code/hli/ros/src/aauship/msg/controlTest.msg
 *
 */


#ifndef AAUSHIP_MESSAGE_CONTROLTEST_H
#define AAUSHIP_MESSAGE_CONTROLTEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <aauship/PID.h>
#include <aauship/testSetpoints.h>

namespace aauship
{
template <class ContainerAllocator>
struct controlTest_
{
  typedef controlTest_<ContainerAllocator> Type;

  controlTest_()
    : pid()
    , setpoints()  {
    }
  controlTest_(const ContainerAllocator& _alloc)
    : pid(_alloc)
    , setpoints(_alloc)  {
    }



   typedef  ::aauship::PID_<ContainerAllocator>  _pid_type;
  _pid_type pid;

   typedef  ::aauship::testSetpoints_<ContainerAllocator>  _setpoints_type;
  _setpoints_type setpoints;




  typedef boost::shared_ptr< ::aauship::controlTest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aauship::controlTest_<ContainerAllocator> const> ConstPtr;

}; // struct controlTest_

typedef ::aauship::controlTest_<std::allocator<void> > controlTest;

typedef boost::shared_ptr< ::aauship::controlTest > controlTestPtr;
typedef boost::shared_ptr< ::aauship::controlTest const> controlTestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aauship::controlTest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aauship::controlTest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::aauship::controlTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aauship::controlTest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::controlTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aauship::controlTest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::controlTest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aauship::controlTest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aauship::controlTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc467b6eed7e26ccc32696c510ec064d";
  }

  static const char* value(const ::aauship::controlTest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc467b6eed7e26ccULL;
  static const uint64_t static_value2 = 0xc32696c510ec064dULL;
};

template<class ContainerAllocator>
struct DataType< ::aauship::controlTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aauship/controlTest";
  }

  static const char* value(const ::aauship::controlTest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aauship::controlTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Coherent message format for all the stuff that is of use for the control-test-node.py\n\
aauship/PID pid\n\
aauship/testSetpoints setpoints\n\
\n\
================================================================================\n\
MSG: aauship/PID\n\
# This is a msg format for exchanging PID controller values\n\
float64 Kp\n\
float64 Ki\n\
float64 Kd\n\
\n\
================================================================================\n\
MSG: aauship/testSetpoints\n\
# Thi is the msg format for the control-test-node and rqt_mypkg\n\
# interface\n\
float64 cmd_vel\n\
float64 cmd_angvel\n\
float64 cmd_ang\n\
int64 controller_type\n\
";
  }

  static const char* value(const ::aauship::controlTest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aauship::controlTest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pid);
      stream.next(m.setpoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct controlTest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aauship::controlTest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aauship::controlTest_<ContainerAllocator>& v)
  {
    s << indent << "pid: ";
    s << std::endl;
    Printer< ::aauship::PID_<ContainerAllocator> >::stream(s, indent + "  ", v.pid);
    s << indent << "setpoints: ";
    s << std::endl;
    Printer< ::aauship::testSetpoints_<ContainerAllocator> >::stream(s, indent + "  ", v.setpoints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AAUSHIP_MESSAGE_CONTROLTEST_H
