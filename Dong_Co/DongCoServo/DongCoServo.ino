#include "Servo.h"
int servoPin = 9;
int vitri = 0;
Servo myservo;
void setup() {
  myservo.attach(servoPin);
}
void loop() {
//  hongngoai  = analogRead(A0);
//  Serial.println(hongngoai);
//  if (gas > 0)
//    {
  for(vitri=0; vitri <= 180; vitri++)
  {
    myservo.write(vitri);
    delay(20);
    }
    delay(5000);
   for(vitri=180; vitri >= 0; vitri--)
  {
    myservo.write(vitri);
    delay(20);
    }
    delay(3000);
//    }
//   else exit(0);
}
