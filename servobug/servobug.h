/*
  sensor.h - Library for flashing sensor code.
  Created by sathishkumar, july, 2016.
  Released into the public domain.
*/
#ifndef Servobug_h
#define Servobug_h

#include "Arduino.h"
  #include "Servo.h"
#include <inttypes.h>

class Servobug
{
  public:
   float Servo1(float servo);
   float Servo2(float servo);
   float Servo3(float servo);
   float Servo4(float servo);
   float Servo5(float servo);
   float Servo6(float servo);
    float Servo1degree(float degree);
    float Servo2degree(float degree);
    float Servo3degree(float degree);
    float Servo4degree(float degree);
    float Servo5degree(float degree);
    float Servo6degree(float degree);
};

#endif