#include <Arduino.h>

#define LED_PIN 2
#define SENSOR_PIN A0
#define DRY_SOIL_VALUE 25

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() { 
  int output_val = map(analogRead(SENSOR_PIN), 0, 1023, 255, 0);
  Serial.println(output_val);
  if (output_val < DRY_SOIL_VALUE){
    digitalWrite(LED_PIN, 1);
  }
  else{
        digitalWrite(LED_PIN, 0);
  }
  delay(500);
}