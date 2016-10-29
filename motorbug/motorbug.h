/*
  Motor library for l298 module
 The MIT License (MIT)
Copyright (c) 2014 Matouš Hýbl
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


#ifndef Motorbug_h
#define Motorbug_h

#include "Arduino.h"

#define STOP 0
#define NONSTOP 10

class Motorbug
{
  public:
    Motorbug();

	void motor1forward();
	void motor1reverse();
	void motor1stop();

	void motor2forward();
	void motor2reverse();
	void motor2stop();

	void motor3forward();
	void motor3reverse();
	void motor3stop();

	void motor4forward();
	void motor4reverse();
	void motor4stop();

    void twowheelforward();
    void twowheelreverse();
	void twowheelright();
	void twowheelleft();

    void fourwheelforward();
    void fourwheelreverse();
	void fourwheelright();
	void fourwheelleft();

	void twowheelstop();
	void fourwheelstop();

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