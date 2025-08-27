void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // Turn LED on
  delay(1000);            // Wait 1 sec
  digitalWrite(13, LOW);  // Turn LED off
  delay(1000);            // Wait 1 sec
}
