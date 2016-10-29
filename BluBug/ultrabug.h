/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef ultrabug_h
#define ultrabug_h

#include "Arduino.h"

class ultrabug
{
  public:
    float ultrastart();
    float ultrainchval( float);
    float ultracmval( float);
    float ultrainch();
    float ultracm();
};

#endif