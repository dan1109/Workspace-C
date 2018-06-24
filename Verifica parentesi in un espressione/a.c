/*
 * a.c
 *
 *  Created on: 11 gen 2017
 *      Author: Daniele
 */
/*
 * ver.c
 *
 *  Created on: 11 gen 2017
 *      Author: Daniele
 */
/*Pseudo-codifica dell’algoritmo
 leggi la stringa s di n caratteri
 c= 0,i=0
 fintanto che i<n e c≥0 ripeti
 se s i è una parentesi tonda aperta allora incrementa il contatore c
 fine-condizione
 se s i è una parentesi tonda chiusa allora  decrementa il contatore c
 fine-condizione
i=i+1
 fine-ciclo
 se c = 0 allora le parentesi sono corrette
 altrimenti le parentesi non sono disposte correttamente
 fine-condizione
 stop
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
int verifica(char s[])
{  int i=0, n,
	cont=0;
n = strlen(s);
while (i<n && cont>=0) {
 if (s[i] == '(')
 cont++;
 if (s[i] == ')')
 cont--;
 i++;

}
 if (cont == 0)
 return(1);
 else
 return(0);

}

 int main(void) {
 char s[MAX];
 printf("Inserisci un’espressione: ");
 scanf("%s", s);
 if (verifica(s) == 1)
 printf("Le parentesi sono corrette.\n");
 else
 printf("Le parentesi NON sono corrette.\n");
 system("pause");
 return(0);
 }



