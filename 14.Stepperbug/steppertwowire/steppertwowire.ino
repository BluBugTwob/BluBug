/*
  Stepperbug
  Control the two-wire steppermotor using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  control the speed and revolution  with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <stepperbug.h>

String value = "";                      // a string to hold incoming data
String stepper1revolution = "";         // a string to hold stepper1revolution data
String stepper2revolution = "";         // a string to hold stepper2revolution data
String stepper3revolution = "";         // a string to hold stepper3revolution data
String stepper4revolution = "";         // a string to hold stepper4revolution data

String stepper1speed = "";              // a string to hold stepper1speed data
String stepper2speed = "";              // a string to hold stepper2speed data
String stepper3speed = "";              // a string to hold stepper3speed data
String stepper4speed = "";              // a string to hold stepper4speed data

boolean stringComplete = false;         // whether the string is complete
int strincrement;

stepperbug stepper1(stepper1revolution.toInt(), 1,2);            // stepper1revolution.toInt() converting string to integer , initiliing the stepper motor
stepperbug stepper2(stepper2revolution.toInt(), 3,4);
stepperbug stepper3(stepper3revolution.toInt(), 5,6);
stepperbug stepper4(stepper4revolution.toInt(), 7,8);

void setup() {
  

  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // set the speed at 60 rpm;
  stepper1.stepperspeed(stepper1speed.toInt());
  stepper2.stepperspeed(stepper2speed.toInt());
  stepper3.stepperspeed(stepper3speed.toInt());
  stepper4.stepperspeed(stepper4speed.toInt());
  // step one revolution  in one direction:
  stepper1.stepperstep(stepper1revolution.toInt());
  stepper2.stepperstep(stepper2revolution.toInt());
  stepper3.stepperstep(stepper3revolution.toInt());
  stepper4.stepperstep(stepper4revolution.toInt());
  
}

void serialEvent() {                                    // Serial event to receive the data from device
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
      stepper3revolution+=value[strincrement];
      Serial.print("3");
      strincrement=0;
    }
    while(value[1]=='4')
    {
      strincrement++;
      stepper4revolution+=value[strincrement];
      Serial.print("4");
      strincrement=0;
    }  
     while(value[1]=='5')
    {
      strincrement++;
      stepper1speed+=value[strincrement];
      Serial.print("5");
      strincrement=0;
    }
    while(value[1]=='6')
    {
      strincrement++;
      stepper2speed+=value[strincrement];
      Serial.print("6");
      strincrement=0;
    }
    while(value[1]=='7')
    {
      strincrement++;
      stepper3speed+=value[strincrement];
      Serial.print("7");
      strincrement=0;
    }
    while(value[1]=='8')
    {
      strincrement++;
      stepper4speed+=value[strincrement];
      Serial.print("8");
      strincrement=0;
    }  
    }
  }
}

