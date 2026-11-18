#include <Arduino.h>

void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  tone(8, 262);            
  digitalWrite(12, HIGH);
  delay(400);
  noTone(8);
  digitalWrite(12, LOW);
  delay(100);

  tone(8, 330);           
  digitalWrite(12, HIGH);
  delay(400);
  noTone(8);
  digitalWrite(12, LOW);
  delay(100);

  tone(8, 392);            
  digitalWrite(12, HIGH);
  delay(400);
  noTone(8);
  digitalWrite(12, LOW);
  delay(100);

  tone(8, 523);    
  digitalWrite(12, HIGH);
  delay(400);
  noTone(8);
  digitalWrite(12, LOW);
  delay(600);            
}