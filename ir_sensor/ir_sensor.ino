#include <Ultrasonic.h>
Ultrasonic sonic(A1);
int testPin = A1;
void setup() {
  Serial.begin(9600);
  pinMode(testPin, INPUT);
}

void loop() {
  int Dist = sonic.read();
  boolean val = analogRead(testPin);
   Serial.println(Dist); 
}
