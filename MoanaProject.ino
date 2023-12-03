#include <Servo.h>

// Servo names
Servo leftServo;
Servo rightServo;
Servo tefiServo;
Servo natureServo;

// Servo buttons & corresponding pins
const int buttonWave = 2;
const int buttonTefi = 8;
const int buttonNature = 4;

//LED pins
const int ledPinBoat = 13;   
const int ledPinCliff = 7;   

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
//LED Buttons
pinMode(buttonBoat, INPUT);
pinMode(buttonCliff, INPUT);
// LED
pinMode(ledPinBoat, OUTPUT);
pinMode(ledPinCliff, OUTPUT);
natureServo.write(0);
tefiServo.write(0);
digitalWrite(ledPinBoat, HIGH);
digitalWrite(ledPinCliff, HIGH);

}

void loop() {
 // waves turns
  if  (digitalRead(buttonWave) == HIGH) {
    Serial.println("button on");
      leftServo.write(180);
      rightServo.write(0);
    }
  // Te Fiti turns
  if  (digitalRead(buttonTefi) == HIGH) {
    Serial.println("button on");
      tefiServo.write(180);
    }
  // Nature scene turns
  if  (digitalRead(buttonNature) == HIGH) {
    Serial.println("button on");
      natureServo.write(180);
     }

  //Boat LED
  if  (digitalRead(buttonBoat) == HIGH) {
    Serial.println("button on");
      digitalWrite(ledPinBoat, LOW);
     }

    //CLiff LED
  if  (digitalRead(buttonCliff) == HIGH) {
    Serial.println("button on");
      digitalWrite(ledPinCliff, LOW);
     }




  }
