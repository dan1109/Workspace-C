/*
 * frequenzacaratteristringa.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Inserisci una stringa: ");
   gets(str);

   printf("Inserisci un carattere per trovare la sequenza : ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   printf("Frequenza di %c = %d \n", ch, frequency);
   system("pause");
   return 0;
}

