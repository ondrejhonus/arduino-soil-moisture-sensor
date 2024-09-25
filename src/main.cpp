#include <Arduino.h>

#define ledPin 2
#define sensorPin A0

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() { 
  int output_val = map(analogRead(sensorPin), 0, 1023, 255, 0);
  Serial.println(output_val);
  if (output_val < 130){
    digitalWrite(ledPin, 1);
  }
  else{
        digitalWrite(ledPin, 0);
  }
  delay(500);
}