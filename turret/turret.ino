// ----- LIBRARIES -----
#include <Servo.h>

// ----- VARIABLES -----
Servo servoY;
Servo servoX;

int valueX;
int valueY;

// ----- SETUP -----
void setup() {
    servoY.attach(6);
    servoX.attach(7);
    pinMode(8, OUTPUT);
}

// ----- LOOP -----
void loop() { 
    valueX = map(analogRead(A1), 0, 1023, 0, 180);
    servoX.write(valueX);
    delay(15);
    valueY = map(analogRead(A0), 0, 1023, 0, 180);
    servoY.write(valueY);
    delay(15);

    if(digitalRead(9) == HIGH) {
      digitalWrite(8, 0);
    
    } else {
      digitalWrite(8, 1);
    }
}