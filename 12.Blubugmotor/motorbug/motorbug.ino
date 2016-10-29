/*
  Motorbug
  Control the Dc Motor using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  control the Dc motor direction  with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <motorbug.h>                        // blugbug library for motor
Motorbug mybot;
void setup() 
{
   Serial.begin(9600);                       // initilize the serial communication 
}

void loop() {
 if(Serial.available())
 {
   char motordata = (char) Serial.read(); 
   if(motordata=='a')
   {
     mybot.motor1forward();                    // if received value 'a' move motor1 forward
   }
   else if(motordata=='b')
   {
     mybot.motor2forward();                    // if received value 'b' move motor2 forward
   }
   else if(motordata=='c')
   {
     mybot.motor3forward();                    // if received value 'c' move motor3 forward
   }
   else if(motordata=='d')
   {
     mybot.motor4forward();                    // if received value 'd' move motor4 forward
   }
   else if(motordata=='e')
   {
     mybot.motor1reverse();                    // if received value 'e' move motor1 reverse  
   }
    else if(motordata=='f')
   {
     mybot.motor2reverse();                    // if received value 'f' move motor2 reverse  
   }
    else if(motordata=='g')
   {
     mybot.motor3reverse();                    // if received value 'g' move motor3 reverse  
   }
    else if(motordata=='h')
   {
     mybot.motor4reverse();                    // if received value 'h'  move motor4 reverse  
   }
    else if(motordata=='i')
   {
      mybot.motor1stop();                      // if received value 'i'  move motor1 stop  
   }
    else if(motordata=='j')
   {
      mybot.motor2stop();                      // if received value 'j'  move motor2 stop  
   }
    else if(motordata=='k')
   {
      mybot.motor3stop();                      // if received value 'k'  move motor3 stop  
   }
   else if(motordata=='l')
   {
      mybot.motor4stop();                      // if received value 'l'  move motor4 stop  
   }
 }
}
