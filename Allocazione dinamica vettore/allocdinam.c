/*
 * allocdinam.c
 *
 *  Created on: 05 gen 2017
 *      Author: Daniele
 */
///***************************************ALLOCARE DINAMICAMENTE UN VETTORE************************************************///
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int i,*vett,dim;

    printf("\nInserisci la dimensione del vettore che vuoi inserire:\n");
    scanf("\n%d",&dim);

    vett=malloc(dim*sizeof(int));  /*alloco una quantit� di memoria tale da contenere un numero pari a dim di elementi int*/
    assert(vett!=NULL);           /*se la memoria non � stata allocata manda in output un messaggio di avviso
                                    poich� la funzione assert verifica se la condizione � vera o no*/
    printf("\nInserisci %d elementi nel vettore:\n",dim);
    for(i=0; i<dim; i++){

    scanf("\n%d",&vett[i]);

    }

    printf("\nPOS\tINDIRIZZO\tVALORE\n");
    for(i=0; i<dim; i++){

    printf("%3d\t%d\t%d\n", i, &vett[i], vett[i]);

    }

    printf("\nNOTARE CHE GLI INDIRIZZI DIFFERISCONO TUTTI DI 4 BYTE PERCH�\n"
           "UN INT OCCUPA PROPRIO 4 BYTE\n\n");

    system("pause");
    return 0;

}


