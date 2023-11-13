#include <Servo.h>

// Servo names
Servo leftServo;
Servo rightServo;
Servo tefiServo;
Servo natureServo;

// Servo buttons & corresponding pins
const int buttonWave = 2;
const int buttonTefi = 3;
const int buttonNature = 4;

// LED buttons & corresponding pins
const int buttonBoat = 5;
const int buttonCliff = 6;

void setup() {
  // left wave & corresponding pins
leftServo.attach(9);
// right wave & corresponding pins
rightServo.attach(10);
// Turns Te Fiti & corresponding pins
tefiServo.attach(11);
// Turns nature scene & corresponding pins
natureServo.attach(12);
// Servo buttons
pinMode(buttonWave, INPUT);
pinMode(buttonTefi, INPUT);
pinMode(buttonNature, INPUT);
}

void loop() {
 // waves turns
  if  (digitalRead(buttonWave) == HIGH) {
      leftServo.write(180);
      rightServo.write(180);
    } else {
      leftServo.write(0);
      rightServo.write(0);
    }
  // Te Fiti turns
  if  (digitalRead(buttonTefi) == HIGH) {
      tefiServo.write(180);
    } else {
      tefiServo.write(0);
    }
  // Nature scene turns
  if  (digitalRead(buttonNature) == HIGH) {
      natureServo.write(180);
     } else {
      natureServo.write(0);
     }
  }
