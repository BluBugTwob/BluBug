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

#include "Arduino.h"
#include "Devicecontrol.h"

/*
 * Basic constructor
 * A - left motor
 * B - right motor
 * EN - Enabling pins - must be connected to PWM
 */
Devicecontrol::Devicecontrol() {
	M1pin = 2;
	M2pin = 3;
	M3pin = 4;
	M4pin = 5;
	M5pin = 6;
	M6pin = 7;
	M7pin = 8;
	M8pin = 9;
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
}

void Devicecontrol::Device1on() {
	digitalWrite(M1pin, HIGH);
}
void Devicecontrol::Device1off() {
	digitalWrite(M1pin, LOW);
}

void Devicecontrol::Device2on() {
	digitalWrite(M2pin, HIGH);
}
void Devicecontrol::Device2off() {
	digitalWrite(M2pin, LOW);
}

void Devicecontrol::Device3on() {
	digitalWrite(M3pin, HIGH);
}
void Devicecontrol::Device3off() {
	digitalWrite(M3pin, LOW);
}

void Devicecontrol::Device4on() {
	digitalWrite(M4pin, HIGH);
}
void Devicecontrol::Device4off() {
	digitalWrite(M4pin, LOW);
}

void Devicecontrol::Device5on() {
	digitalWrite(M5pin, HIGH);
}
void Devicecontrol::Device5off() {
	digitalWrite(M5pin, LOW);
}

void Devicecontrol::Device6on() {
	digitalWrite(M6pin, HIGH);
}
void Devicecontrol::Device6off() {
	digitalWrite(M6pin, LOW);
}

void Devicecontrol::Device7on() {
	digitalWrite(M7pin, HIGH);
}
void Devicecontrol::Device7off() {
	digitalWrite(M7pin, LOW);
}

void Devicecontrol::Device8on() {
	digitalWrite(M8pin, HIGH);
}
void Devicecontrol::Device8off() {
	digitalWrite(M8pin, LOW);
}
