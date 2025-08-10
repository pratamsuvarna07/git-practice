void setup() {
  Serial.begin(9600);
  // dht.begin();
  Serial.println("Temperature Monitor Started");
}

void loop() {
  // float temp = dht.readTemperature(); // actual sensor reading

  // Simulated temperature for testing without sensor
  float temp = 25.0 + random(-5, 6) * 0.5; // random between 22.5 to 27.5

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  if (temp > 28.0) {
    Serial.println("Warning: Temperature rising!");
  } else {
    Serial.println("Temperature is normal.");
  }

  delay(2000); // 2 second delay
}
