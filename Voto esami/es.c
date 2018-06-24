/*
 * es.c
 *
 *  Created on: 15 gen 2017
 *      Author: Daniele
 */
/*



Si scriva un programma in linguaggio C che tramite:

la funzione leggi(), legga a terminale i dati di N studenti (con N definito come la costante 4) costituiti da Nome, Cognome, Voto, e li inserisca in un vettore;
calcoli con la funzione media() la media dei voti;
stampi a terminale i nominativi di ciascuno studente;
stampi poi a terminale il voto medio.
Ad esempio, avendo in ingresso:

Alberani	Luigi	30
Vettori	Piero	33
Zanetti	Lorenzo	18
stampi:

Alberani	Luigi
Vettori	Piero
Zanetti	Lorenzo
Voto medio: 27.0


Soluzione:


*/

#include <stdio.h>

#define N 4

struct studente{
    char Nome[20];
    char Cognome[20];
    int Voto;};

void leggi(int n, struct studente Vet[]);
float media(int n, struct studente Vet[]);

main(){
    int i;
    struct studente V[N];
    leggi(N,V);
    for(i=0;i<N;i++){
        printf("%s\n",V[i].Nome);
        printf("%s\n", V[i].Cognome);
    }
    printf("\nVoto medio: %f\n",media(N,V));
}

void leggi(int n, struct studente Vet[]){
    int i,j;
    for(i=0;i<n;i++){
        printf("Inserisci Nome, Cognome e Voto");
        scanf("%s",Vet[i].Nome);
        scanf("%s",Vet[i].Cognome);
        scanf("%d",&Vet[i].Voto);
    }
}
float media(int n, struct studente Vet[]){
    int i;
    float m=0.0;
    for(i=0;i<n;i++)
        m=m+Vet[i].Voto;
    return m/n;
}
