/*
 * findbiggerelementinarray.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    float arr[100];

    printf("Inserisci il numero totale di elementi (1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Inserisci numero: %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Elemento più grande = %.2f ", arr[0]);
    system("pause");
    return 0;
}

