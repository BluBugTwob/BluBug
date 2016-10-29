

#ifndef Robotarm_h
#define Robotarm_h

#include "Arduino.h"

#define STOP 0
#define NONSTOP 10

class Robotarm
{
  public:
    Robotarm();

	void forward();
	void reverse();
	void stopbot();
    void start();
    void left();
    void right();
    void up();
    void down();
    void openarm();
    void closearm();
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