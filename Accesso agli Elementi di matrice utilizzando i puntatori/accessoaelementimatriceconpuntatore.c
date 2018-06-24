/*
 * accessoaelementimatriceconpuntatore.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int data[5], i;
   printf("Inserisci 5 elementi: ");

   for(i = 0; i < 5; ++i)
     scanf("%d", data + i);

   printf("Hai inserito: \n");
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(data + i));
   system("pause");
   return 0;
}

