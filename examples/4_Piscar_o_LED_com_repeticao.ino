/**
 * Esse código faz o Led A piscar com uma frequência de 4 Hz 20 vezes.
 */
#include <Arduino.h>
#include <LED.h>

Led ledA(15);

void setup()
{
  ledA.piscar(4, 20);
}

void loop()
{
  ledA.update();
}