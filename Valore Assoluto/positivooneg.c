/*
 * positivooneg.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double number;

    printf("Inserisci un numero: ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("Hai inserito 0.");
        else
            printf("Hai inserito un numero negativo.");
    }
    else
        printf("Hai inserito un numero positivo.");
   system("pause");
    return 0;
}

