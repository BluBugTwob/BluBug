
#ifndef Devicecontrol_h
#define Devicecontrol_h

#include "Arduino.h"

#define STOP 0
#define NONSTOP 10

class Devicecontrol
{
  public:
    Devicecontrol();
	void Device1on();
	void Device1off();
    void Device2on();
    void Device2off();
    void Device3on();
    void Device3off();
    void Device4on();
    void Device4off();
    void Device5on();
    void Device5off();
    void Device6on();
    void Device6off();
    void Device7on();
    void Device7off();
    void Device8on();
    void Device8off();
    private:
    int M1pin;
    int M2pin;
	int M3pin;
	int M4pin;
	int M5pin;
	int M6pin;
    int M7pin;
    int M8pin;
};

#endif