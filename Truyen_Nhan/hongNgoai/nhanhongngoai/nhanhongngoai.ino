#include <IRremote.h>
//#include "Servo.h"
//int servoPin = 9;
//int vitri = 0;
//Servo myservo;

#include <Stepper.h>
const int stepsPerRevolution = 512;
Stepper myStepper = Stepper(stepsPerRevolution, 3, 4, 5, 6);

const int RECV_Pin = 11;
const int LED_Pin = 13;

IRrecv irrecv(RECV_Pin);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(LED_Pin, OUTPUT);
  
//  myservo.attach(servoPin);
  
  myStepper.setSpeed(30);
  }

void loop(){
  if (irrecv.decode(&results)){
    if (results.bits > 0) {
      int state;
      Serial.println(results.value, HEX);
      if (0x101 == results.value){
        state = HIGH;
//        for(vitri=0; vitri <= 180; vitri++)
//        {
//          myservo.write(vitri);
//          delay(20);
//          }
//        delay(5000);
        myStepper.step(stepsPerRevolution);
        delay(1000);
        myStepper.step(stepsPerRevolution);
        delay(100);
        
        } else {
          state = LOW;
        }
        digitalWrite(LED_Pin,state);       
        }
      irrecv.resume();
    }
  }
