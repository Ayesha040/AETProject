#include <Servo.h>

Servo myservo; 
const int buttonPin = 2;
int buttonState = 0;
int previousButtonState = 0;

void setup() {
myservo.attach(9);
pinMode(buttonPin, INPUT);
}

void loop() {
  if  (digitalRead(buttonPin) == HIGH) {
      myservo.write(180);
    } else {
      myservo.write(0);
    }
  }
}
