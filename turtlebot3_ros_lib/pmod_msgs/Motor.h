#ifndef _ROS_pmod_msgs_Motor_h
#define _ROS_pmod_msgs_Motor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pmod_msgs
{

  class Motor : public ros::Msg
  {
    public:
      typedef int8_t _left_type;
      _left_type left;
      typedef int8_t _right_type;
      _right_type right;

    Motor():
      left(0),
      right(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_left;
      u_left.real = this->left;
      *(outbuffer + offset + 0) = (u_left.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->left);
      union {
        int8_t real;
        uint8_t base;
      } u_right;
      u_right.real = this->right;
      *(outbuffer + offset + 0) = (u_right.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->right);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_left;
      u_left.base = 0;
      u_left.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->left = u_left.real;
      offset += sizeof(this->left);
      union {
        int8_t real;
        uint8_t base;
      } u_right;
      u_right.base = 0;
      u_right.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->right = u_right.real;
      offset += sizeof(this->right);
     return offset;
    }

    virtual const char * getType() override { return "pmod_msgs/Motor"; };
    virtual const char * getMD5() override { return "24825b8956c21f4c3dd28a5a4d09322c"; };

  };

}
#endif
