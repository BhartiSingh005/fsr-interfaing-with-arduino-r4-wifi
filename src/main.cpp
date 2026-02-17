#include <Arduino.h>
int fsrPin =A0;
void setup() {
    Serial.begin(9600);
    // write your initialization code here
}

void loop() {
    int fsrValue = analogRead(fsrPin);
    Serial.println(fsrValue);
    delay(300);
    // write your code here
}