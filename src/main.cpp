#include <Arduino.h>

#define pinSensor A0
#define pinLedAnalog 5
#define pinLedDigital 4

uint32_t sensorValue;
const uint32_t sensorThreshold = 10;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT);
    pinMode(pinLedAnalog, OUTPUT);
    pinMode(pinLedDigital, OUTPUT);
}

void loop() {
    sensorValue = analogRead(pinSensor);
    Serial.println(sensorValue);
    analogWrite(pinLedAnalog, sensorValue);
    bool isThresholdReached = (sensorValue < sensorThreshold);
    digitalWrite(pinLedDigital, isThresholdReached);
    delay(100);
}