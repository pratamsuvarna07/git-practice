const int buzzerPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  float temp = 25.0 + random(-5, 6) * 0.5; // Simulated temp

  // Send as JSON string
  Serial.print("{\"temperature\":");
  Serial.print(temp);
  Serial.println("}");

  // Buzzer logic
  if (temp > 30.0) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(2000);
}
