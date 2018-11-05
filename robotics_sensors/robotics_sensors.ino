#include <Ultrasonic.h>
Ultrasonic sonic1(3);
int red = 5;    
int green = 6;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int distanceCm1 = sonic1.distanceRead();
  if (distanceCm1 > 10) { 
    analogWrite(red, 0);
    analogWrite(green, 255); 
    }else{
      analogWrite(green, 0); 
      analogWrite(red, 255);
    }
}

