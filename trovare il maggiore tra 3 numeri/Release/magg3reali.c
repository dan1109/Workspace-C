/*
 * magg3reali.c
 *
 *  Created on: 11 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
float maximum(float, float, float);
int main()
{
float a, b, c;
printf("digita tre numeri: ");
scanf("%d%d%d",&a,&b,&c);
printf("il massimo �: %d",maximum(a,b,c));
printf("\n");
system("pause");
return 0;
}
float maximum(float x, float y, float z){
float max = x;
if (y > max) max = y;
if (z > max) max = z;
return max;
}



