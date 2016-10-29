/*
  Robotarm
  Control the robot using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth you can control. 
  check the documentation at http://www.twob.co.in

  Control four dc motor with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */

#include <robotarm.h>                          // blugbug library for robotarm
Robotarm mybot;
void setup() 
{
   Serial.begin(9600);                         // initilize the serial communication 
}

void loop() {
 if(Serial.available())                        // check for data is available from serial port
 {
   char botdata = (char) Serial.read();        // read the data from serial port and move data a character
   if(botdata=='a')
   {
     mybot.left();                          // if received value 'a' move motor1 forward
   }
   else if(botdata=='b')
   {
     mybot.right();                          // if received value 'e' move motor1 reverse  
   
   }
    else if(botdata=='c')
   {
      mybot.forward();                           // if received value 'l'  move motor4 stop 
   }
    else if(botdata=='d')
   {
      mybot.reverse();                            // if received value 'l'  move motor4 stop  
   }
    else if(botdata=='g')
   {
      mybot.up();                            // if received value 'l'  move motor4 stop  
   }
    else if(botdata=='h')
   {
      mybot.down();                            // if received value 'l'  move motor4 stop  
   }
    else if(botdata=='e')
   {
      mybot.openarm();                            // if received value 'l'  move motor4 stop  
   }
    else if(botdata=='f')
   {
      mybot.closearm();                            // if received value 'l'  move motor4 stop  
   }
    else if(botdata=='s')
   {
      mybot.stopbot();                            // if received value 'i'  move motor1 stop  
   }  
 }
}
