// Define the buzzer and LED pins
const int buzzerPin = 8;
const int ledPin = 9;

// Define the threshold for drowsiness detection
const int threshold = 500;

// Define the time limit for eye closure detection in milliseconds
const int eyeCloseTimeLimit = 4000;

// Variables to store the time when the eyes close and when they open
unsigned long eyeCloseStartTime = 0;
unsigned long eyeOpenTime = 0;

void setup() {
  // Set the buzzer and LED pins as outputs
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  // Set the serial baud rate to 9600
  Serial.begin(9600);
}

void loop() {
  // Read the value from the analog pin
  int sensorValue = analogRead(A0);

  // Print the sensor value to the serial monitor
  Serial.println(sensorValue);

  // Check if the sensor value is below the threshold
  if (sensorValue < threshold) {
    // If the sensor value is below the threshold, record the time when the eyes close
    if (eyeCloseStartTime == 0) {
      eyeCloseStartTime = millis();
    }

    // Check if the eyes have been closed for longer than the time limit
    if (millis() - eyeCloseStartTime >= eyeCloseTimeLimit) {
      // Turn on the LED and buzzer
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);
      delay(9000);

      // Turn off the LED and buzzer
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, LOW);

      // Record the time when the eyes open
      eyeOpenTime = millis();

      // Reset the eye close start time
      eyeCloseStartTime = 0;
    }
  } else {
    // If the sensor value is above the threshold, reset the eye close start time
    eyeCloseStartTime = 0;
  }

  // Check if the eyes have been open for longer than the time limit since they were last closed
  if (eyeOpenTime > 0 && millis() - eyeOpenTime >= eyeCloseTimeLimit) {
    eyeCloseStartTime = 0;
    eyeOpenTime = 0;
  }
}
