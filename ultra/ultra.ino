#include <Ultrasonic.h>
Ultrasonic sonic1(3, 5);
void setup() {
  Serial.begin(9600);
}

void loop() {
  int Dist1 = sonic1.distanceRead();
  if (Dist1 > 0){
    Serial.println(Dist1);
  }
}
