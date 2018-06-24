#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#ifndef FUNZIONI_TARTAGLIA
#define FUNZIONI_TARTAGLIA

typedef struct Tvettore
{
	   int *v;
	   int elementi,caricati;
}Tvettore;

void azzera(struct Tvettore *, int);
void distruggi(struct Tvettore *);
void ciclo(int);
void stampa(struct Tvettore, int);
void somma(struct Tvettore, struct Tvettore *);
void eguaglia(struct Tvettore, struct Tvettore *);
int domanda(const char *, int, int);
void centra(char *, char, int);

void azzera(struct Tvettore *linea, int dimensione)
{
	linea->elementi=abs(dimensione);
	if ((linea->elementi == 0) || (linea->elementi > 2000))
		linea->elementi=50;
	linea->v=(int*) (malloc(linea->elementi * sizeof(int)));
	linea->v[0]=1;
	linea->caricati=1;
	int i;
	for(i=1; i<linea->elementi; i++)
	{
		linea->v[i]=0;
	}
}

void ciclo(int linee)
{
	Tvettore attuale, successiva;
	int i=1;
	azzera(&attuale, 20);
	azzera(&successiva, 20);
	printf("\n\n");
	stampa(attuale, i);
	while (i<linee)
	{
		i++;
		somma(attuale, &successiva);
		stampa(successiva, i);
		eguaglia(successiva, &attuale);
	}
	distruggi(&attuale);
	distruggi(&successiva);
}

void distruggi(struct Tvettore *linea)
{
	if (linea->v != NULL)
	{
		free(linea->v);
		linea->v=NULL;
		linea->elementi=0;
		linea->caricati=0;
	}
}

void stampa(struct Tvettore linea, int indice)
{
	int i=0;
	char numero[40]="", sequenza[150]=" ";
	printf("%3d|", indice);
	for (i=0; i<linea.caricati; i++)
	{
		sprintf(numero, "%d ", linea.v[i]);
		strcat(sequenza, numero);
	}
	centra(sequenza, ' ', 74);
	printf("%s\n", sequenza);
}

void somma(struct Tvettore sopra, struct Tvettore *sotto)
{
	sotto->caricati=sopra.caricati + 1;
	if (sotto->caricati < sotto->elementi)
	{
		sotto->v[0]=1;
		int i;
		for (i=1; i<sopra.caricati; i++)
		{
			(*sotto).v[i]=sopra.v[i - 1] + sopra.v[i];
		}
		sotto->v[sotto->caricati - 1]=1;

	}
}

void eguaglia(struct Tvettore origine, struct Tvettore *travaso)
{
	if (origine.caricati < travaso->elementi)
	{
		int i;
		travaso->caricati=origine.caricati;
		for (i=0; i < origine.caricati; i++)
		{
			travaso->v[i]=origine.v[i];
		}
	}
}

int domanda(const char *messaggio, int linf, int lsup)
{
	int esito=0, test=1;
	char numero[80]="";
	while (test)
	{
		test=0;
		printf("\n%s", messaggio);
		scanf(" %s", numero);
		while (getchar() != '\n');
		esito=atoi(numero);
		if (esito < linf)
		{
			test=1;
			printf("Inserire un valore superiore a %d\n", linf);
		}
		if (esito > lsup)
		{
			test=1;
			printf("Inserire un valore inferiore a %d \n", lsup);
		}
	}
	return esito;
}

void centra(char *frase, char carattere, int lunghezza)
{
	int parziali, j, i;
	char risultato[150] = "";
	if ((frase != NULL) && (lunghezza < 120))
	{
		if (lunghezza > strlen(frase))
		{
			parziali=(int)(lunghezza - strlen(frase)) / 2;
			i=0;
			while (i < parziali)
			{
				risultato[i]=carattere;
				i++;
			}
			risultato[i]='\0';
			strcat(risultato, frase);
			j=strlen(risultato);
			while (j < lunghezza)
			{
				risultato[j]=carattere;
				j++;
			}
			risultato[j]='\0';
			strcpy(frase, risultato);
		}
	}
}

#endif
