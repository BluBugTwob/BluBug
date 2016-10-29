/*
  Devicecontrol
  Control the Electrical device using smart phone via bluetooth or wifi using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  Control eight device with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */

#include <devicecontrol.h>                          // blugbug library for robotarm
Devicecontrol device;
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
    device.Device1on();
   }
   else if(botdata=='b')
   {
    device.Device1off();   
   }
    else if(botdata=='c')
   {
     device.Device2on();
   }
    else if(botdata=='d')
   {
     device.Device2off();
   }
    else if(botdata=='e')
   {
     device.Device3on();
   }
    else if(botdata=='f')
   {
     device.Device3off();
   }
    else if(botdata=='g')
   {
     device.Device4on();
   }
    else if(botdata=='h')
   {
     device.Device4off();
   }
    else if(botdata=='i')
   {
    device.Device5on();
   } 
   else if(botdata=='j')
   {
    device.Device5off();
   }   
   else if(botdata=='k')
   {
    device.Device6on();
   }  
   else if(botdata=='l')
   {
    device.Device6off();
   }  
   else if(botdata=='m')
   {
    device.Device7on();
   }  
   else if(botdata=='n')
   {
    device.Device7off();
   }  
   else if(botdata=='o')
   {
    device.Device8on();
   }  
   else if(botdata=='p')
   {
    device.Device8off();
   }  
 }
}
