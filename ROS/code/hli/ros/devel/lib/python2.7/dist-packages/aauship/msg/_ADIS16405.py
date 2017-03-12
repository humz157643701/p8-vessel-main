"""autogenerated by genpy from aauship/ADIS16405.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ADIS16405(genpy.Message):
  _md5sum = "7cf3439b3e98d50b8f75a089f6f143fa"
  _type = "aauship/ADIS16405"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Format for the ADIS13205 IMU from the LLI decoded data
float32 supply
float32 xgyro
float32 ygyro
float32 zgyro
float32 xaccl
float32 yaccl
float32 zaccl
float32 xmagn
float32 ymagn
float32 zmagn
float32 temp
float32 adc

"""
  __slots__ = ['supply','xgyro','ygyro','zgyro','xaccl','yaccl','zaccl','xmagn','ymagn','zmagn','temp','adc']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       supply,xgyro,ygyro,zgyro,xaccl,yaccl,zaccl,xmagn,ymagn,zmagn,temp,adc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ADIS16405, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.supply is None:
        self.supply = 0.
      if self.xgyro is None:
        self.xgyro = 0.
      if self.ygyro is None:
        self.ygyro = 0.
      if self.zgyro is None:
        self.zgyro = 0.
      if self.xaccl is None:
        self.xaccl = 0.
      if self.yaccl is None:
        self.yaccl = 0.
      if self.zaccl is None:
        self.zaccl = 0.
      if self.xmagn is None:
        self.xmagn = 0.
      if self.ymagn is None:
        self.ymagn = 0.
      if self.zmagn is None:
        self.zmagn = 0.
      if self.temp is None:
        self.temp = 0.
      if self.adc is None:
        self.adc = 0.
    else:
      self.supply = 0.
      self.xgyro = 0.
      self.ygyro = 0.
      self.zgyro = 0.
      self.xaccl = 0.
      self.yaccl = 0.
      self.zaccl = 0.
      self.xmagn = 0.
      self.ymagn = 0.
      self.zmagn = 0.
      self.temp = 0.
      self.adc = 0.

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
      buff.write(_struct_12f.pack(_x.supply, _x.xgyro, _x.ygyro, _x.zgyro, _x.xaccl, _x.yaccl, _x.zaccl, _x.xmagn, _x.ymagn, _x.zmagn, _x.temp, _x.adc))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 48
      (_x.supply, _x.xgyro, _x.ygyro, _x.zgyro, _x.xaccl, _x.yaccl, _x.zaccl, _x.xmagn, _x.ymagn, _x.zmagn, _x.temp, _x.adc,) = _struct_12f.unpack(str[start:end])
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
      buff.write(_struct_12f.pack(_x.supply, _x.xgyro, _x.ygyro, _x.zgyro, _x.xaccl, _x.yaccl, _x.zaccl, _x.xmagn, _x.ymagn, _x.zmagn, _x.temp, _x.adc))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 48
      (_x.supply, _x.xgyro, _x.ygyro, _x.zgyro, _x.xaccl, _x.yaccl, _x.zaccl, _x.xmagn, _x.ymagn, _x.zmagn, _x.temp, _x.adc,) = _struct_12f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_12f = struct.Struct("<12f")