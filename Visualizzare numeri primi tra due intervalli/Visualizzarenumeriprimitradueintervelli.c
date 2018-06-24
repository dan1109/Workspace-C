/*
 * Visualizzarenumeriprimitradueintervelli.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int low, high, i, flag;
    printf("Inserisci i due numeri(intervallo): ");
    scanf("%d %d", &low, &high);

    printf("Numeri primi tra %d e %d sono: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }
    system("pause");
    return 0;
}

