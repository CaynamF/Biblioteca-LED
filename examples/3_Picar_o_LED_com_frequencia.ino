/**
 * Esse código faz o Led A piscar com uma frequência de 4 Hz.
 */
#include <Arduino.h>
#include <LED.h>

Led ledA(15);

void setup()
{
  ledA.piscar(4);
}

void loop()
{
  ledA.update();
}