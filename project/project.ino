
#include "Arduino.h"
#include "heltec.h"
#include "WiFi.h"

#define MQ2_pin 13


void printSensor(int value){
  Heltec.display -> clear();
  Heltec.display -> drawString(50, 25, String(value));
  Heltec.display -> display();
}

void setup() {
  pinMode(MQ2_pin, INPUT);
  
  Heltec.begin(true, false, true, false);
  Heltec.display -> clear();
  Heltec.display->setFont(ArialMT_Plain_16);
  Heltec.display -> drawString(50, 50, "Test");
  Heltec.display -> display();
}

void loop() {
  int value = analogRead(MQ2_pin);
  printSensor(value);
  delay(500);
  

}
