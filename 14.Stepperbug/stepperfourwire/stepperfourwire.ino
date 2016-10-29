/*
  Stepperbug
  Control the fourwire steppermotor using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  control the speed and revolution  with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <stepperbug.h>

String value = "";                                              // a string to hold incoming data

String stepper1revolution = "";                                 // a string to hold stepper1revolution data
String stepper2revolution = "";                                 // a string to hold stepper2revolution data

String stepper1speed = "";                                      // a string to hold stepper1speed data
String stepper2speed = "";                                      // a string to hold stepper2speed data

boolean stringComplete = false;                                 // whether the string is complete
int strincrement;

stepperbug stepper1(stepper1revolution.toInt(), 1,2,3,4);       // initilize the stepper motor1
stepperbug stepper2(stepper2revolution.toInt(), 5,6,7,8);       // initilize the stepper motor2

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // set the speed 
  stepper1.stepperspeed(stepper1speed.toInt());            // Set the speed for stepper motor1      
  stepper2.stepperspeed(stepper2speed.toInt());            // Set the speed for stepper motor1
  // step revolution
  stepper1.stepperstep(stepper1revolution.toInt());        // Set the no of revolution for stepper motor1
  stepper2.stepperstep(stepper2revolution.toInt());        // Set the no of revolution for stepper motor2
}

void serialEvent() {                                       //Serial event receive data from device
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    value += inChar;
    if(value[0]=='s')
    {
      while(value[1]=='1')
    {
      strincrement++;
      stepper1revolution+=value[strincrement];
      Serial.print("1");
      strincrement=0;
    }
    while(value[1]=='2')
    {
      strincrement++;
      stepper2revolution+=value[strincrement];
      Serial.print("2");
      strincrement=0;
    }
     while(value[1]=='3')
    {
      strincrement++;
      stepper1speed+=value[strincrement];
      Serial.print("3");
      strincrement=0;
    }
    while(value[1]=='4')
    {
      strincrement++;
      stepper2speed+=value[strincrement];
      Serial.print("4");
      strincrement=0;
    }
    }
  }
}

