#include <Servo.h>

Servo leftServo;
Servo rightServo;
Servo tefiServo;
Servo natureServo;
const int buttonWave = 2;
const int buttonTefi = 3;
const int buttonNature = 4;
const int buttonBoat = 5;
const int buttonCliff =6;

void setup() {
  // wave left
leftServo.attach(9);
// wave right
rightServo.attach(10);
// tefi turns
tefiServo.attach(11);
// nature scene turns
natureServo.attach(12);
pinMode(buttonWave, INPUT);
pinMode(buttonTefi, INPUT);
pinMode(buttonNature, INPUT);
}

void loop() {
  if  (digitalRead(buttonWave) == HIGH) {
      leftServo.write(180);
      rightServo.write(180);
    } else {
      leftServo.write(0);
      rightServo.write(0);
    }
  if  (digitalRead(buttonTefi) == HIGH) {
      tefiServo.write(180);
    } else {
      tefiServo.write(0);
    }
  if  (digitalRead(buttonNature) == HIGH) {
      natureServo.write(180);
     } else {
      natureServo.write(0);
     }
  }
