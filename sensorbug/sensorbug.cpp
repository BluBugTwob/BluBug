#include "Arduino.h"
#include "sensorbug.h"


const int trigPin = 13;
const int echoPin = 12;


  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  float duration,uinches,ucm;

float sensorbug::sensor1()
{
 float readsensor1= analogRead(A0);
 return readsensor1;
}

float sensorbug::sensor2()
{
 float readsensor2= analogRead(A1);
 return readsensor2;
}

float sensorbug::sensor3()
{
 float readsensor3= analogRead(A2);
 return readsensor3;
}

float sensorbug::sensor4()
{
 float readsensor4= analogRead(A3);
 return readsensor4;
}

float sensorbug::sensor5()
{
 float readsensor5= analogRead(A4);
 return readsensor5;
}

float sensorbug::sensor6()
{
 float readsensor6= analogRead(A5);
 return readsensor6;
}

float sensorbug::ultrastart()
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

float sensorbug::ultrainch()
{
uinches=ultrainchval(duration); 
return uinches;
}

float sensorbug::ultracm()
{
 ucm=ultracmval(duration);
return ucm;
}

float sensorbug::ultrainchval(float inch)
{
  float inches = (inch)/ 74 / 2;
  return inches;
}

float sensorbug::ultracmval(float centemeter)
{
  float cm = (centemeter)/ 29 / 2;
  return cm;
}
