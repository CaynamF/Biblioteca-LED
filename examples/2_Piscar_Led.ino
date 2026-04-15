/**
 * Este código faz o LED A piscar continuamente.
 */
#include <Arduino.h>
#include <LED.h>

Led ledA(15);


void setup()
{
 ledA.piscar();
}

void loop()
{
  ledA.update();
}