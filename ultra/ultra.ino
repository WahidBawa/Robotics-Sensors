#include <Ultrasonic.h> // includes the Ultrasonic library
Ultrasonic sonic1(3, 5); // this will get the echo and trig from the input and output signal wires
void setup() {
  Serial.begin(9600);
}

void loop() {
  int Dist1 = sonic1.distanceRead(); // this reads the distance in cm
  // int Dist1 = sonic1.read(); // use this in the case the library requires the read() method instead of distanceRead()
  Serial.println(Dist1); // This will print the distance (Ctrl + Shift + m for serial monitor)
}
