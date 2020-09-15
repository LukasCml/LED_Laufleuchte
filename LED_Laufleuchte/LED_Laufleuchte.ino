/*
   Programm:          LED Laufleuchte
   Letzte Änderung:   15.09.2020
   Programmierer:     LC

   Hardware:      Arduino UNO, 4 LED's an Pin 4,5,6 und 7, Laufleuchte
*/

#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7


void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED4, LOW);

}
