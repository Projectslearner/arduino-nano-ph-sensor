/*
    Project name : pH Sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-ph-sensor
*/

// Define the analog pin connected to the pH sensor
#define PH_SENSOR_PIN A0

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set up the pH sensor pin as an input
  pinMode(PH_SENSOR_PIN, INPUT);

  // Print initial message to serial monitor
  Serial.println("pH Sensor Example");
  Serial.println("Reading pH values...");
}

void loop() {
  // Read the analog value from the pH sensor
  int sensorValue = analogRead(PH_SENSOR_PIN);

  // Convert the analog value to pH value (adjust the conversion formula based on your sensor)
  float pHValue = map(sensorValue, 0, 1023, 0, 14); // Assuming pH range is 0-14

  // Print pH value to serial monitor
  Serial.print("pH Value: ");
  Serial.println(pHValue);

  // Add a delay before taking the next reading
  delay(1000);
}
