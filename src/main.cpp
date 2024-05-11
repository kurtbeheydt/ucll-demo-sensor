#include <Arduino.h>

#define pinSensor A0

uint32_t sensorValue;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT);
}

void loop() {
    sensorValue = analogRead(pinSensor);
    Serial.println(sensorValue);
    delay(100);
}