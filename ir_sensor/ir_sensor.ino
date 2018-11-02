#include <Ultrasonic.h>
//Ultrasonic sonic(A1);
int input = A1;
void setup() {
  Serial.begin(9600);
  pinMode(input, INPUT);
}

void loop() {
//  int Dist = sonic.read();
  boolean val = analogRead(input);
   Serial.println(val); 
}
