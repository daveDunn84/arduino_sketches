
/*

 Ref: Stepper Motor Specs -> https://components101.com/motors/28byj-48-stepper-motor
 Ref: Diagram -> https://europe1.discourse-cdn.com/arduino/original/4X/6/f/0/6f05c0b6b34000f8724cdebc52523abf0f37a4ca.png
 Ref: This addresses some issues -> https://forum.arduino.cc/t/stepper-motors-wont-go-in-reverse/528486/5

 Notes:
   - 2048 steps does one full revolution
   - 

 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 128;  // change this to fit the number of steps per revolution
// for your motor
// find that 256 doesn't work, motor just makes a noise
// 128 works

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(120);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(2048);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-2048);
  delay(500);
}

