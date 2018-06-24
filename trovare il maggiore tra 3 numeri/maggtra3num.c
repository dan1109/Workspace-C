/*
 * maggtra3num.c
 *
 *  Created on: 11 nov 2016
 *      Author: Daniele
 */
/* trovare il maggiore di tre interi */
#include <stdio.h>
#include <stdlib.h>
int maximum(int, int, int);
int main()
{
int a, b, c;
printf("digita tre interi: ");
scanf("%d%d%d",&a,&b,&c);
printf("il massimo è: %d",maximum(a,b,c));
printf("\n");
system("pause");
return 0;
}
int maximum(int x, int y, int z){
int max = x;
if (y > max) max = y;
if (z > max) max = z;
return max;
}

