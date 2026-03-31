const int sensorPin = A0;
const float warningTemp = 35.0;

void setup() {
 Serial.begin(9600);
 Serial.println("Temperature Monitor Started");
}

void loop() {
  // Stores value read from sensor pin
  int value = analogRead(sensorPin); // read value and convert to num 0 - 1023
  
  // convert to voltage
  float voltage = (value / 1024.0) * 5.0;
  
  // convert to cdonmelsius
  float celsius = (voltage - 0.5) * 100.0;
  
  // convert to fahrenheit
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  
  
  // print reading
  Serial.print("Temp: ");
  Serial.print(celsius);
  Serial.print("C | ");
  Serial.print(fahrenheit);
  Serial.println(" F ");
  
  // temp check
  if (celsius > warningTemp) {
    Serial.println("Warning: High Temp");
  }
  
  // next read in 1 second
  delay(1000);
}
