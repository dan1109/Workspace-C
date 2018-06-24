/*
 * checknumber.c
 *
 *  Created on: 05 gen 2017
 *      Author: Daniele
 */
///*********************************************CERCA ELEMENTO DA FILE*********************************************************///
/*Questo programma cerca un singolo numero da un file in cui sono stati memorizzati dei numeri esempio: 1 2 3 4 5
  attenzione il file deve essere incluso nella cartella di questo programma e il nome del file va inserito insieme alla
  sua estensione .txt o .dat*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int  leg(int vet[],char file[]);
int  ricerca(int vet[],int dim,int c);

int main()
{
    int vet[20],c,h;
    int dim;
    char file[20];

    printf("Inserisci il nome del file da aprire: ");
    scanf("%s",file);
    dim=leg(vet,file);
    printf("inserisci elemento da confrontare: ");
    scanf("%d",&c);

    h=ricerca(vet,dim,c);

    if(h==-1){

        printf("L'elemento cercato non e' presente.");

        }
    else{

        printf("L'elemento cercato e' presente nella posizione %d",h);

        }
    system("pause");
    return 0;
}
/* LEGGE I DATI NEL FILE LI INSERISCE NEL VETTORE E NE RITORNA IL NUMERO */
int  leg(int vet[],char file[]){

FILE *fp;
int i=0;


    fp=fopen(file,"r");
    while(!feof(fp)){

        fscanf(fp,"%d",&vet[i]);
        i++;

    }

    fclose(fp);

return i;

}
/* CONFRONTA IL NUMERO INSERITO CON OGNI ELEMENTO DEL FILE E RITORNA LA POSIZIONE DELL'ELEMENTO */
int  ricerca(int vet[],int dim,int c){

    int i;

    for(i=0;i<dim;i++){

        if(c==vet[i])
            return i+1;

    }

    return -1;

}






