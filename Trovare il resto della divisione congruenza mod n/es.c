/*
 * es.c
 *
 *  Created on: 12 gen 2017
 *      Author: Daniele
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int base,esponente,resto,restoelevato,i,mod,prodotto,a;



	printf("Dammi la base\n");
	scanf("%d",&base);
	printf("Dammi l'esponente\n");
	scanf("%d",&esponente);
	printf("Dammi il mod n \n");
	scanf("%d",&mod);
	resto= base-(mod*(base/mod));
	printf("base del resto e' %d\n",resto);
	i=1;
	while(i<esponente)
	{	prodotto=i*mod;
		if(restoelevato>=mod && (prodotto+mod)>restoelevato)
		{	a=(resto*(restoelevato-(prodotto)));
			if(a>mod)
			{
				a= a-(mod*(a/mod));
			}
			printf("Resto dell'operazione e' %d\n",a);
			system("pause");
			exit(1);
		}
		restoelevato= pow(resto,i+1);
		i++;
	}
	system("pause");
	return 0;
}

