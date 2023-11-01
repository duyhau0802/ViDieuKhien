#include <Stepper.h>
const int stepsPerRevolution = 512;
Stepper myStepper = Stepper(stepsPerRevolution, 3, 4, 5, 6);
//Stepper myStepper1 = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(30);
//  myStepper1.setSpeed(20);
}
void loop() {
  myStepper.step(stepsPerRevolution);
  delay(100000);
//  myStepper1.step(-2*stepsPerRevolution);
//  delay(1000);
}
