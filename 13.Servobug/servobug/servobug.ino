/*
  Servobug
  Control the servomotor  using smart phone via bluetooth using android app

  BluBug have an on-board bluetooth & on-board slot wifi you can control. 
  check the documentation at http://www.twob.co.in

  control the servo angle with this code.

  This example code is in the public domain.

  modified 25 August 2016
  by Sathish kumar
 */
#include <Servo.h>             //Servo library
 
Servo servobug1;        //initialize a servo object for the connected servo-motor1  
Servo servobug2;        //initialize a servo object for the connected servo-motor2  
Servo servobug3;        //initialize a servo object for the connected servo-motor3  
Servo servobug4;        //initialize a servo object for the connected servo-motor4  
Servo servobug5;        //initialize a servo object for the connected servo-motor5  
Servo servobug6;        //initialize a servo object for the connected servo-motor6  
                
int servo1angle = 0;    //initialize a servo motor1 angle to 0;  
int servo2angle = 0;    //initialize a servo motor2 angle to 0;
int servo3angle = 0;    //initialize a servo motor3 angle to 0;
int servo4angle = 0;    //initialize a servo motor4 angle to 0;
int servo5angle = 0;    //initialize a servo motor5 angle to 0;
int servo6angle = 0;    //initialize a servo motor6 angle to 0;

String value="";
int strincrement;

void setup() 
{ 
  Serial.begin(9600);
  servobug1.attach(servo1angle);       // attach the signal pin of servo-motor1 to pin10 of arduino
  servobug2.attach(servo2angle);       // attach the signal pin of servo-motor2 to pin11 of arduino
  servobug3.attach(servo3angle);       // attach the signal pin of servo-motor3 to pin9 of arduino
  servobug4.attach(servo4angle);       // attach the signal pin of servo-motor4 to pin6 of arduino
  servobug5.attach(servo5angle);       // attach the signal pin of servo-motor5 to pin5 of arduino
  servobug6.attach(servo6angle);       // attach the signal pin of servo-motor6 to pin3 of arduino
} 

void loop() 
{          
    servobug1.write(servo1angle);                 //command to rotate the servo to the specified angle
                    
}

void serialEvent() {                                       //Serial event receive data from device
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    value += inChar;
    if(value[0]=='s')
    {
      if(value[1]=='1')
    {
      strincrement++;
      servo1angle+=value[strincrement];
      Serial.print("1");
      strincrement=0;
    }
    else if(value[1]=='2')
    {
      strincrement++;
      servo2angle+=value[strincrement];
      Serial.print("2");
      strincrement=0;
    }
    else if(value[1]=='3')
    {
      strincrement++;
      servo3angle+=value[strincrement];
      Serial.print("3");
      strincrement=0;
    }
    else if(value[1]=='4')
    {
      strincrement++;
      servo4angle+=value[strincrement];
      Serial.print("4");
      strincrement=0;
    }
     else if(value[1]=='5')
    {
      strincrement++;
      servo5angle+=value[strincrement];
      Serial.print("5");
      strincrement=0;
    }
     else if(value[1]=='6')
    {
      strincrement++;
      servo6angle+=value[strincrement];
      Serial.print("6");
      strincrement=0;
    }
    }
  }
}

