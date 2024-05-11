#include <Arduino.h>

#define pinSensor A0
#define pinLed 5

uint32_t sensorValue;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT);
    pinMode(pinLed, OUTPUT);
}

void loop() {
    sensorValue = analogRead(pinSensor);
    Serial.println(sensorValue);
    analogWrite(pinLed, sensorValue);
    delay(100);
}