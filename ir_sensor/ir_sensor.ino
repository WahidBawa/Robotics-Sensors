int input = A1; // gets the pin for the input
void setup() {
  Serial.begin(9600);
  pinMode(input, INPUT); // gets intput from the pin
}

void loop() {
  boolean val = analogRead(input); // gets a boolean value for if there is something in front of the ir sensor
  Serial.println(val);  // this will print out the value (Ctrl + Shift + m) 
}
