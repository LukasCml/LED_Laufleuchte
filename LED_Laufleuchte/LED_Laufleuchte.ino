/*
   Programm:          LED Laufleuchte
   Letzte Änderung:   18.09.2020
   Programmierer:     LC

   Hardware:      Arduino UNO, 4 LED's an Pin 4,5,6 und 7, Laufleuchte
*/

byte led[4] = {4, 5, 6, 7};


void setup()
{
  for (byte i = 0; i < 4; i++)
  {
    pinMode (led[i], OUTPUT);
  }
}

void loop()
{
  for (byte i = 0; i < 4; i++)
  {
    digitalWrite(led[i], HIGH);
    delay(150);
  }
  for (byte i = 3; i < 4; i--)
  {
    digitalWrite(led[i], LOW);
    delay(150);
  }
}
