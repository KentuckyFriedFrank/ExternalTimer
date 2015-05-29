
void setup() {
  Serial.begin(115200);
}

byte Start = 0; // start byte is dec 0
byte Stop = 1; // stop byte is dec 1
// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  Serial.write(Start);
  delay(100);
  Serial.write(Stop);
  delay(100);
}



