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
#include "Robotarm.h"

/*
 * Basic constructor
 * A - left motor
 * B - right motor
 * EN - Enabling pins - must be connected to PWM
 */
Robotarm::Robotarm() {
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

/*
 * Stop both motors
 */
void Robotarm::stopbot() {
	digitalWrite(M1pin, LOW);
	digitalWrite(M2pin, LOW);
	digitalWrite(M3pin, LOW);
	digitalWrite(M4pin, LOW);
	digitalWrite(M5pin, LOW);
	digitalWrite(M6pin, LOW);
	digitalWrite(M7pin, LOW);
	digitalWrite(M8pin, LOW);

}

/*
 * Move both motors forward
 */
void Robotarm::forward() {
	digitalWrite(M1pin, HIGH);
	digitalWrite(M2pin, LOW);
	digitalWrite(M3pin, HIGH);
	digitalWrite(M4pin, LOW);
	
}

/*
 * robot arm up
 */

void Robotarm::up() {
	digitalWrite(M5pin, HIGH);
	digitalWrite(M6pin, LOW);
	
}

/*
 * robot arm open
 */
void Robotarm::openarm() {
	digitalWrite(M7pin, HIGH);
	digitalWrite(M8pin, LOW);
	
}

/*
 * Move both motors reverse
 */
void Robotarm::reverse() {
	digitalWrite(M1pin, LOW);
	digitalWrite(M2pin, HIGH);
	digitalWrite(M3pin, LOW);
	digitalWrite(M4pin, HIGH);
}

/*
 * robot arm down
 */

void Robotarm::down() {
	digitalWrite(M5pin, LOW);
	digitalWrite(M6pin, HIGH);
}

/*
 * robot arm close
 */

void Robotarm::closearm() {
	digitalWrite(M7pin, LOW);
	digitalWrite(M8pin, HIGH);
}

/*
 * move robot right
 */
 void Robotarm::right() {
	digitalWrite(M1pin, LOW);
	digitalWrite(M2pin, HIGH);
	digitalWrite(M3pin, HIGH);
	digitalWrite(M4pin, LOW);
}

/*
 * move robot left
 */

void Robotarm::left() {
	digitalWrite(M1pin, HIGH);
	digitalWrite(M2pin, LOW);
	digitalWrite(M3pin, LOW);
	digitalWrite(M4pin, HIGH);
}


