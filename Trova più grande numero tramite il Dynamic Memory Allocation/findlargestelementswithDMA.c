/*
 * findlargestelementswithDMA.c
 *
 *  Created on: 22 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    float *data;

    printf("Inserisci il numero totale di elementi(1 to 100): ");
    scanf("%d", &num);

    // Allocates the memory for 'num' elements.
    data = (float*) calloc(num, sizeof(float));

    if(data == NULL)
    {
        printf("Errore!!! memoria non allocata.");
        exit(0);
    }

    printf("\n");

    // Stores the number entered by the user.
    for(i = 0; i < num; ++i)
    {
       printf("Inserisci numero: %d: ", i + 1);
       scanf("%f", data + i);
    }

    // Loop to store largest number at address data
    for(i = 1; i < num; ++i)
    {
       // Change < to > if you want to find the smallest number
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("Elemento più grande  = %.2f \n", *data);
    system("pause");
    return 0;
}

