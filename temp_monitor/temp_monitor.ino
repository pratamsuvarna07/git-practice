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

  if (temp > 30.0) {
    Serial.println("Status: Too Hot!");
  } else {
    Serial.println("Status: Normal");
  }

  delay(2000); // 2 second delay// Arduino Temperature Monitor Sketch
