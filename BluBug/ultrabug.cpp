#include "Arduino.h"
#include "ultrabug.h"

const int trigPin = 13;
const int echoPin = 12;


  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  float duration,uinches,ucm;

float ultrabug::ultrastart()
{
 
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  
 
  delay(100);

}

float ultrabug::ultrainch()
{
uinches=ultrainchval(duration); 
return uinches;
}
float ultrabug::ultracm()
{
 ucm=ultracmval(duration);
return ucm;
}
float ultrabug::ultrainchval(float inch)
{
  float inches = (inch)/ 74 / 2;
  return inches;
}

float ultrabug::ultracmval(float centemeter)
{
  float cm = (centemeter)/ 29 / 2;
  return cm;
}
