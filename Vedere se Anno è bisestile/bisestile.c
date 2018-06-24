/*
 * bisestile.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year;

    printf("Inserisci Anno: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d è un anno bisestile.", year);
            else
                printf("%d non è un anno bisestile.", year);
        }
        else
            printf("%d è un anno bisestile.", year );
    }
    else
        printf("%d non è un anno bisestile.", year);
    system("pause");
    return 0;
}

