/*
  sensor.h - Library for flashing sensor code.
  Created by sathishkumar, july, 2016.
  Released into the public domain.
*/
#ifndef sensorbug_h
#define sensorbug_h

#include "Arduino.h"

class sensorbug
{
  public:
    float sensor1();
    float sensor2();
    float sensor3();
    float sensor4();
    float sensor5();
    float sensor6();
    float ultrastart();
    float ultrainchval( float);
    float ultracmval( float);
    float ultrainch();
    float ultracm();
};

#endif