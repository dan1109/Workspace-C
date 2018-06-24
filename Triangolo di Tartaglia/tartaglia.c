/*
 * tartaglia.c
 *
 *  Created on: 29 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funzioni.h"

int main(void)
{
	char intestazione[150]=" Triangolo di Tartaglia ";
	centra(intestazione, '-', 78);
    printf(" %s\n", intestazione);
    ciclo(domanda("Quante linee ? ", 3, 17));
    printf("\n\nFine... ");
    while (getchar() != '\n');
    return 0;
}

