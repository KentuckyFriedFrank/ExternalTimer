
void setup() {
  Serial.begin(115200);
}
byte Start = 0; // start byte is dec 0
byte Stop = 1; // stop byte is dec 1
int simDelay = 100; //simulated delay code would take
int postDelay = 100; //delay after the Stop byte gets sent in order to give Processing time to be ready for next Start signal
void loop() {
  Serial.write(Start);
  delay(simDelay);
  Serial.write(Stop);
  delay(postDelay);
}



