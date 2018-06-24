/*
 * testaocroce.c
 *
 *  Created on: 29 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "testaocroce.h"



void scherminoLanci(int lanciGioco, int lanciRimanenti){
	if(lanciGioco == LANCI_MONETA-1){
		printf("\n------------------\n");
		printf("->ULTIMO LANCIO<-");
		printf("\n------------------\n");
	} else {
		printf("\n------------\n");
		printf("Lancio: %d\n", lanciGioco+1);
		printf("Rimanenti: %d", lanciRimanenti);
		printf("\n------------\n");
	}

	return;
}


void stampaVincitore(char* nome , esitoPartita esitoFinale){
	if(esitoFinale == pareggio){
		printf("PAREGGIO \n");
	}
	if(esitoFinale == vinceComputer){
		printf("Mi dispiace %s ",nome);
		printf("Hai perso la partita\n");
	}
	if(esitoFinale == vinceOspite){
		printf("%s ",nome);
		printf("Hai vinto la partita\n");
	}

	return;
}
/*
Utilizzo gli enum per calcolare gli esiti del lancio.
Asserisco che il lancio sia vinto dal pc, verifico con un if
e cambio esito in caso la condizione e' vera, risparmiando un altro if-else.
*/
esitoLancio controllaEsitoLancio(int giocataUtente, int giocataCPU){
	esitoLancio esito = vinceCPU;
	if(giocataUtente == 1 && giocataCPU == 1 || giocataUtente == 2 && giocataCPU == 2){
		esito = vinceGiocatore;
	}

	return esito;
}


//Stessa cosa qui, uso il tipo enumerato, vedi file .h della libreria.
esitoPartita vincitorePartita(int puntiCpu, int puntiGiocatore){
	esitoPartita esitoFinale;
	if(puntiCpu == puntiGiocatore){
		esitoFinale = pareggio;
		return esitoFinale;
	} else if(puntiCpu > puntiGiocatore){
		esitoFinale = vinceComputer;
		return esitoFinale;
	} else {
		esitoFinale = vinceOspite;
		return esitoFinale;
	}
}


void schermoEsitoLancio(char* nome, esitoLancio esito, int* pPuntiCpu, int* pPuntiGiocatore){
	if(esito == vinceCPU){
		printf("Peccato %s ", nome);
		printf("hai perso il lancio! \n");
		printf("Il computer ha vinto 1 punto  \n");
		*pPuntiCpu += 1;
	} else if(esito = vinceGiocatore){
		printf("Complimenti %s ", nome);
		printf("hai vinto il lancio! \n");
		printf("Hai guadagnato 1 punto \n");
		*pPuntiGiocatore += 1;
	}

	return;
}


void stampaGiocataCPU(int giocataCPU){
	if(giocataCPU == 1){
		printf("E' TESTA! \n");
		printf("  /|\n");
		printf("/  |\n");
		printf("   |\n");
		printf("   |\n");

	} else if(giocataCPU == 2){
		printf("E' CROCE! \n");
		printf("  +   \n");
		printf("  +   \n");
	printf(   "+ + + + \n");
		printf("  +   \n");
		printf("  +   \n");

	}

	return;
}

//Istruzioni necessarie per generare i numeri casuali e il lancio della moneta.
int lanciaMoneta(){
	int lancio;
	setSeed();
	lancio = rand() % 2 + 1;

	return lancio;
}
void setSeed(){
	unsigned seed = time(NULL);
	srand(seed);

	return;
}
//
void schermoPunti(char* nomeGiocatore, int puntiCpu, int puntiGiocatore){
	printf("\nComputer: punti %d \n", puntiCpu);
	printf("%s", nomeGiocatore);
	printf(":");
	printf(" punti %d \n", puntiGiocatore);

	return;
}

void giocataGiocatore(int* pGiocata){
	printf("\nGIOCA  :\n");
	printf("1 = TESTA, 2 = CROCE, 0 = INTERROMPI PARTITA\n");
	scanf("%d", pGiocata);
	while(*pGiocata !=1 && *pGiocata !=2 && *pGiocata !=0){
		printf("**ERRORE, valore scorretto, ripeti -> ");
		scanf("%d", pGiocata);
	}
	if(*pGiocata == 1){
		printf("Hai tentato TESTA \n");
		printf("  /|\n");
		printf("/  |\n");
		printf("   |\n");
		printf("   |\n");
	} else if(*pGiocata == 2) {
		printf("Hai tentato CROCE \n");
		printf("  +   \n");
		printf("  +   \n");
	printf(   "+ + + + \n");
		printf("  +   \n");
		printf("  +   \n");
	}

	return;
}

void convalidaStringa(char* s){
	while(strlen(s) == 0){
		printf("**ERRORE, immetti una stringa corretta ->");
		gets(s);
	}
	return;
}

void schermoBenVenuto(char* nome){
	printf("------------------------------------------------------\n");
	printf("B E N V E N U T O /A  N E L  T E S T A  O  C R O C E \n");
	printf("------------------------------------------------------\n");
	printf("Immetti il tuo nome per iniziare il gioco \n");
	gets(nome);
	convalidaStringa(nome);
	printf("\nBenvenuto/a : %s \n", nome);

	return;
}

void menuDiScelta(int* pScelta){
	printf("+---------------------------------+\n");
	printf("   M E N U'  P R I N C I P A L E  \n");
	printf("+---------------------------------+\n\n");
	printf("1. Inizia a giocare \n");
	printf("2. Regole del gioco e info developer \n");
	printf("3. Cambia nome giocatore e ricomicia \n");
	printf("0. Esci dal gioco \n\n");
	printf("Scelta : ");
	scanf("%d", pScelta);
	while(*pScelta < 0 || *pScelta > 3){
		printf("** Scelta non valida.. ripeti ->");
		scanf("%d", pScelta);
	}

	return;
}

void informazioni(){
	printf("\nREGOLE DEL GIOCO\n");
	printf("-----------------------------------------------------\n");
	printf("Tenta la fortuna. Se indovini TESTA O CROCE,\n");
	printf("guadagni un punto.\n");
	printf("Altrimenti il punto va al PC.\n");
	printf("La partita si compone di 4 lanci.\n");
	printf("Se si abbandona senza aver mai tentato si da FORFAIT.\n\n");
	printf("-----------------------------------------------------\n\n");
	printf("Info app e sviluppatore :\n");
	printf("--------------------------------------\n");
	printf("Developer: Rocco Telesca\n");
	printf("Mail : telescarocco@hotmail.it\n");
	printf("Tecnologia utilizzata :\n");
	printf("Linguaggio C and Notepad++ for editing\n");
	printf("Versione : 1.3\n");
	printf("--------------------------------------\n\n");
	return;
}

void resettaPunti(int* pPuntiGiocatore, int* pPuntiCpu, int* pLanciRimanenti){
	*pPuntiGiocatore = 0;
	*pPuntiCpu = 0;
	*pLanciRimanenti = 4;
	return;
}

