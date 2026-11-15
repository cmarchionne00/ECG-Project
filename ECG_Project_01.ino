#include <WiFiS3.h>


void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

  Serial.println("ECG Project Intialized!");
  Serial.println("Waiting for sensor data...");
}

void loop() {
  Serial.println("Arduino is running.");// put your main code here, to run repeatedly:
  delay(1000);
}
