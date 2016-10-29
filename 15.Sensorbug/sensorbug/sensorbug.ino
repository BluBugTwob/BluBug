/*
  Sensorbug
  Monitor the analog-sensor data using smart phone via bluetooth or wifi using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  Monitor the six analog-sensor and ultrasonic sensor with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <sensorbug.h>                                     // initilie the sensorbug library file
sensorbug mysensor;
void setup() {
  Serial.begin(9600);                                      // initilie the serilal communication 
}

void loop() {
  mysensor.ultrastart();       // initilize the ultrasonic sensor
  int ultrainchdata=mysensor.ultrainch() // get the ultrasonic range in inches & print the inches
  Serial.print(ultrainchdata);  
  int ultracmdata=mysensor.ultracm() // get the ultrasonic range in cm & print the cm
  Serial.print(ultracmdata); 
  int sensor1data= mysensor.sensor1() // get the sensor1 & print the data
  Serial.print(sensor1data); 
   int sensor2data= mysensor.sensor2() // get the sensor1 & print the data
  Serial.print(sensor2data);   
   int sensor3data= mysensor.sensor3() // get the sensor1 & print the data
  Serial.print(sensor3data);    
   int sensor4data= mysensor.sensor4() // get the sensor1 & print the data
  Serial.print(sensor4data); 
   int sensor5data= mysensor.sensor5() // get the sensor1 & print the data
  Serial.print(sensor5data); 
   int sensor6data= mysensor.sensor6() // get the sensor1 & print the data
  Serial.print(sensor6data);     
}
