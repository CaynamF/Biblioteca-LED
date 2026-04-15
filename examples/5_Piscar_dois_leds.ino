/**
 * Esse código faz o Led A piscar com uma frequência de 2 Hz 15 vezes e o Led B piscar com uma frequência de 4 Hz 30 vezes.
 */
#include <Arduino.h>
#include <LED.h>

Led ledA(42);
Led ledB(39);

void setup()
{
  ledA.piscar(2, 15);
  ledB.piscar(4, 30);
}

void loop()
{
  ledA.update();
  ledB.update();
}