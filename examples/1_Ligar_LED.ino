/**
 * Este código faz o LED A ligar por 5 segundos.
 */
#include <Arduino.h>
#include <LED.h>

Led ledA(15);


void setup()
{
 ledA.ligar(5000);
}

void loop()
{
  ledA.update();
}