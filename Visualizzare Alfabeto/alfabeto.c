/*
 * alfabeto.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char c;

    printf("inserisci 'u' per visualizzare l'alfabeto in maiuscolo. E inserisci 'l'per visualizzare l'alfabeto in minuscolo: ");
    scanf("%c", &c);

    if(c== 'U' || c== 'u')
    {
       for(c = 'A'; c <= 'Z'; ++c)
         printf("%c ", c);
    }
    else if (c == 'L' || c == 'l')
    {
        for(c = 'a'; c <= 'z'; ++c)
         printf("%c ", c);
    }
    else
       printf("ERRORE: hai inserito un carattere non valido.");
    system("pause");
    return 0;
}
