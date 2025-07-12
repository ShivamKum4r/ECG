#define ECG_SENSOR A0
int ecgValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  ecgValue = analogRead(ECG_SENSOR);
  Serial.println(ecgValue);  // Print ECG data to serial monitor
  delay(100);  // Adjust the delay as needed for your application
}
