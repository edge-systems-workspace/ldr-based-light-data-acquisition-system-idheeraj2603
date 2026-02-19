/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Dheeraj Yadav [idheeraj2603]
 * @date 19-02-2026
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

#include <Arduino.h>
int ldrPin = A0;
void setup() {
    Serial.begin(9600);
    while (!Serial);


    // write your initialization code here
}
void loop() {
    int ldrValue = analogRead(ldrPin);
    int lightPercent=map(ldrValue, 0, 1023, 0, 100);
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);
    delay(300);
}
// write your code here