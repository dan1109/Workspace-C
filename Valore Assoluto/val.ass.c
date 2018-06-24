/*
 * val.ass.c
 *
 *  Created on: 09 nov 2016
 *      Author: Daniele
 */
/* PROGRAMMAZIONE IN C */
/* File: es-valabs.c */
/* Soluzione proposta esercizio "Valore assoluto" */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int a, b ; /* numero inserito ed il corrispondente valore assoluto */
/* LEGGI IL NUMERO */
printf("Immetti un numero: ") ;
scanf("%d", &a) ;
/* VERIFICA SE IL NUMERO E’ POSITIVO O NEGATIVO */
if ( a >= 0 )
{
/* IL NUMERO E’ POSITIVO */
printf("Il numero %d e’ positivo\n", a) ;
/* ASSEGNA A b IL VALORE DI a */
b = a ;
}
else
{
/* IL NUMERO E’ NEGATIVO */
printf("Il numero %d e’ negativo\n", a) ;
/* ASSEGNA A b IL VALORE DI a CAMBIANDO IL SEGNO */
b = -a ;
} /* STAMPA IL RISULTATO */
printf("Il valore assoluto di %d e’ %d\n", a, b) ;
system("PAUSE");
exit(0) ;
}

