/*
 * mediaconarray.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("ERRORE! Il numero dovrebbe essere nell' intervallo di (1 - 100).\n");
        printf("Inserisci nuovamente il numero: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Numero inserito : ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf(" Media = %.2f  ", average);
    system("pause");
    return 0;
}

