/*
 * es.c
 *
 *  Created on: 15 gen 2017
 *      Author: Daniele
 */
/*do
{
 [leggi la temperatura Celsius]
if ([temperatura Celsius è maggiore o uguale a –273.15])
 {
 [converti la temperatura Celsius in Fahrenheit e Kelvin]
 [scrivi le temperature Fahrenheit e Kelvin]
 }
else
 {
 [scrivi che c’è un errore: non esistono temperature Celsius minori di –273.15]
 }
} while ([temperatura Celsius è maggiore di –273.15])
Implementazione*/
#include <stdio.h>
void main()
{
const float zeroAssolutoCelsius = -273.15;
float celsius, fahrenheit, kelvin;
do
 {
 printf ("Inserire temperat. in °C (-273.15 = fine): ");
 scanf ("%f", &celsius);
 if (celsius >= zeroAssolutoCelsius)
 {
 fahrenheit = (9.0 / 5.0) * celsius + 32;
 kelvin = celsius - zeroAssolutoCelsius;
 printf ("Fahrenheit: %f, Kelvin: %f\n", fahrenheit,
 kelvin);
 }
 else
 {
 printf ("Errore!\n");
 }
 } while (celsius != zeroAssolutoCelsius);
system("pause");
}

