#include <Arduino.h>

#define pinButton 5
#define pinLed 4

void setup() {
    Serial.begin(115200);
    Serial.println();

    pinMode(pinButton, INPUT_PULLUP);
    pinMode(pinLed, OUTPUT);
}

void loop() {
    bool buttonValue = !digitalRead(pinButton);
    Serial.println(buttonValue);
    digitalWrite(pinLed, buttonValue);
    delay(100);
}