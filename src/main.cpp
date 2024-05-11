#include <Arduino.h>

#define pinSensor A0
#define pinLed 5

uint32_t sensorValue;
const uint32_t sensorThreshold = 10;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT);
    pinMode(pinLed, OUTPUT);
}

void loop() {
    sensorValue = analogRead(pinSensor);
    Serial.println(sensorValue);
    bool isThresholdReached = (sensorValue < sensorThreshold);
    digitalWrite(pinLed, isThresholdReached);
    delay(100);
}