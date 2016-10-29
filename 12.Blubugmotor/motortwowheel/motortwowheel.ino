/*
  Motorbug
  Control the Dc Motor using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  control the two Dc motor direction with this code.
  use to create the two wheel robot.
  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <motorbug.h>                        // blugbug library for motor
Motorbug mybot;
void setup() {
   Serial.begin(9600);                       // initilize the serial communication
}

void loop() {
if(Serial.available())                      // Check for available serial available data
{
  char botdata = (char) Serial.read();      // read the serial available data
  if(botdata=='f')                         
  {
    mybot.twowheelforward();                // if received value is 'f' move bot forward
  }
  else if(botdata=='b')
  {
    mybot.twowheelreverse();                // if received value is 'b' move bot reverse
  }
  else if(botdata=='l')
  {
    mybot.twowheelleft();                   // if received value is 'l' move bot left
  }
  else if(botdata=='r')
  {
    mybot.twowheelreverse();                // if received value is 'r' move bot reverse
  }
  else if(botdata=='w')
  {
    mybot.twowheelstop();                   // if received value is 'w' stop bot 
  }
 }
}
