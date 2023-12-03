/* Moana: Once Upon an Arduino

Team: Once Upon a Team
Team Members: Chisara Ogbuehi & Ayesha Faheem

Description: In this program we spin servos 180 degrees and turn on lights 
when buttons are pressed in order to tell the story of Disney's Moana

*/

#include <Servo.h>

// Servo names
Servo leftServo;
Servo rightServo;
Servo tefiServo;
Servo natureServo;

// Servo button names & corresponding pins
const int buttonWave = 2;
const int buttonTefi = 8;
const int buttonNature = 4;

//LED names & corresponding pins
const int ledPinBoat = 13;   //blue button
const int ledPinCliff = 7;   // green button

// LED button names & corresponding pins
const int buttonBoat = 5;
const int buttonCliff = 6;

// Setting up servo, buttons, and LEDs
void setup() {
  // Turns left wave & corresponding pins
leftServo.attach(9);
// Turns right wave & corresponding pins
rightServo.attach(10);
// Turns Te Fiti & corresponding pins
tefiServo.attach(11);
// Lifts nature scene & corresponding pins
natureServo.attach(12);
// Servo buttons
pinMode(buttonWave, INPUT);
pinMode(buttonTefi, INPUT);
pinMode(buttonNature, INPUT);
//LED Buttons
pinMode(buttonBoat, INPUT);
pinMode(buttonCliff, INPUT);
// LEDs
pinMode(ledPinBoat, OUTPUT);
pinMode(ledPinCliff, OUTPUT);
// Starting point for servos and LEDs
natureServo.write(0);
tefiServo.write(0);
digitalWrite(ledPinBoat, HIGH);
digitalWrite(ledPinCliff, HIGH);
}

//Program servos and LEDs with corresponding buttons
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
