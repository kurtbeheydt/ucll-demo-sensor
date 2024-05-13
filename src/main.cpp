#include <Arduino.h>

#define pinSensor 13
#define pinLed 12

uint32_t sensorValue;

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinSensor, INPUT);

    ledcSetup(ledChannel, freq, resolution);
    ledcAttachPin(pinLed, ledChannel);
}

void loop() {
    sensorValue = analogRead(pinSensor);
    Serial.println(sensorValue);
    sensorValue = map(sensorValue, 0, 4095, 0, 255);
    ledcWrite(ledChannel, sensorValue);
    delay(100);
}