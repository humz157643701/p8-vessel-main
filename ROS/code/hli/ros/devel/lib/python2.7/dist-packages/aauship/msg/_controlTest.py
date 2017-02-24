"""autogenerated by genpy from aauship/controlTest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import aauship.msg

class controlTest(genpy.Message):
  _md5sum = "cc467b6eed7e26ccc32696c510ec064d"
  _type = "aauship/controlTest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Coherent message format for all the stuff that is of use for the control-test-node.py
aauship/PID pid
aauship/testSetpoints setpoints

================================================================================
MSG: aauship/PID
# This is a msg format for exchanging PID controller values
float64 Kp
float64 Ki
float64 Kd

================================================================================
MSG: aauship/testSetpoints
# Thi is the msg format for the control-test-node and rqt_mypkg
# interface
float64 cmd_vel
float64 cmd_angvel
float64 cmd_ang
int64 controller_type

"""
  __slots__ = ['pid','setpoints']
  _slot_types = ['aauship/PID','aauship/testSetpoints']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pid,setpoints

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(controlTest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.pid is None:
        self.pid = aauship.msg.PID()
      if self.setpoints is None:
        self.setpoints = aauship.msg.testSetpoints()
    else:
      self.pid = aauship.msg.PID()
      self.setpoints = aauship.msg.testSetpoints()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_6dq.pack(_x.pid.Kp, _x.pid.Ki, _x.pid.Kd, _x.setpoints.cmd_vel, _x.setpoints.cmd_angvel, _x.setpoints.cmd_ang, _x.setpoints.controller_type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pid is None:
        self.pid = aauship.msg.PID()
      if self.setpoints is None:
        self.setpoints = aauship.msg.testSetpoints()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.pid.Kp, _x.pid.Ki, _x.pid.Kd, _x.setpoints.cmd_vel, _x.setpoints.cmd_angvel, _x.setpoints.cmd_ang, _x.setpoints.controller_type,) = _struct_6dq.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_6dq.pack(_x.pid.Kp, _x.pid.Ki, _x.pid.Kd, _x.setpoints.cmd_vel, _x.setpoints.cmd_angvel, _x.setpoints.cmd_ang, _x.setpoints.controller_type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pid is None:
        self.pid = aauship.msg.PID()
      if self.setpoints is None:
        self.setpoints = aauship.msg.testSetpoints()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.pid.Kp, _x.pid.Ki, _x.pid.Kd, _x.setpoints.cmd_vel, _x.setpoints.cmd_angvel, _x.setpoints.cmd_ang, _x.setpoints.controller_type,) = _struct_6dq.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6dq = struct.Struct("<6dq")
