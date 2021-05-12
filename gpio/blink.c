/*
 * blink.c:
 *      blinks the first LED
 *      Gordon Henderson, projects@drogon.net
 *
 * gcc -o blink blink.c -lwiringPi
 * sudo ./blink
 */

#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
  printf ("Raspberry Pi blink\n") ;

  if (wiringPiSetup () == -1)
    return 1 ;

  pinMode (7, OUTPUT) ;         // aka BCM_GPIO 4
  pinMode (0, OUTPUT) ;         // aka BCM_GPIO 17

  for (;;)
  {
    digitalWrite(7, 1) ;       // On
    digitalWrite(0, 1) ;       // On
    delay (500);               // mS
    digitalWrite(7, 0) ;       // Off
    digitalWrite(0, 0) ;       // Off
    delay(500);
  }
  return 0 ;
}
