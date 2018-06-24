/*
 * calc.c
 *
 *  Created on: 09 nov 2016
 *      Author: Daniele
 */
/* PROGRAMMAZIONE IN C */
/* File: calcolatrice.c */
/* Soluzione proposta esercizio "Semplice calcolatrice" */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float a, b ; /* numeri inseriti */
float somma, differenza, prodotto, quoziente ;
/* STAMPA COSA ESEGUIRA’ IL PROGRAMMA */
printf("Programma: Calcolatrice\n\n") ;
/* LEGGI I DUE NUMERI */
printf("Inserisci il primo numero: ") ;
scanf("%f", &a) ;
printf("Inserisci il secondo numero: ") ;
scanf("%f", &b) ;
/* CALCOLA LA SOMMA */
somma = a + b ;
/* CALCOLA LA DIFFERENZA */
differenza = a - b ;
/* CALCOLA IL PRODOTTO */
prodotto = a * b ;
/* CALCOLA LA DIVISIONE */
quoziente = a / b ;
/* STAMPA IL RISULTATO */
printf("\n") ;
printf("Numeri inseriti %f e %f\n", a, b) ;
printf("La somma e’ %f\n", somma) ;
printf("La differenza e’ %f\n", differenza) ;
printf("Il prodotto e’ %f\n", prodotto) ;
printf("La divisione e’ %f\n", quoziente) ;
system("PAUSE");
exit(0) ;
}

