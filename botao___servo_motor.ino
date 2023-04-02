#include <Servo.h>
#define pinServo 9
#define pinPoteciometro A0

Servo servo1;

void setup() {
  
  servo1.attach(pinServo);
 
}

void loop() {

  int lido = analogRead(pinPoteciometro);
  byte angulo = map(lido, 0, 1028, 0, 185);

  servo1.write(angulo);
 
}
