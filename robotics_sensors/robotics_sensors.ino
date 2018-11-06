#include <Ultrasonic.h>
Ultrasonic sonic1(3); // gets the pin for the distance read
// int red = 5; 
// int green = 6;
void setup() {
  Serial.begin(9600);
  // pinMode(red, OUTPUT);
  // pinMode(green, OUTPUT);
}

void loop() {
  int distanceCm1 = sonic1.distanceRead(); // this will read in the distance
  Serial.println(distanceCm1); // this will print out the value (Ctrl + Shift + m)
  // int distanceCm1 = sonic1.read(); // use in case the library requires the read() method instead of distanceRead() method

  /* //This is for the rgb led which will change colours depending on the distance read from the ultrasonic sensor
  if (distanceCm1 > 10) { 
    analogWrite(red, 0);
    analogWrite(green, 255); 
    }else{
      analogWrite(green, 0); 
      analogWrite(red, 255);
    }
    */
}

