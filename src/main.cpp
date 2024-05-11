#include <Arduino.h>

#define pinSensor 5
#define pinLedDigital 4

uint32_t sensorValue;
const uint32_t sensorThreshold = 10;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT_PULLUP);
    pinMode(pinLedDigital, OUTPUT);
}

void loop() {
    sensorValue = digitalRead(pinSensor);
    Serial.println(sensorValue);
    digitalWrite(pinLedDigital, sensorValue);
    delay(100);
}