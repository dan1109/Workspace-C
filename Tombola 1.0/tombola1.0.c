/*
 * tombola1.0.c
 *
 *  Created on: 29 nov 2016
 *      Author: Daniele
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define righe 3
#define colonne 5
#define maxvett 15
#define maxnome 10
#define maxcontr 90

int main () {
	int ambo,ambo1,ambo2,terno1,terno2,quaterna1,quaterna2,cinquina1,cinquina2,tombola1,tombola2;
	int trovato,giauscito,entrato;

	int const false =0;
    int const true = 1;

    int ambo1fatto,terno1fatto,quaterna1fatto,cinquina1fatto,tombola1fatto;
    int ambo2fatto,terno2fatto,quaterna2fatto,cinquina2fatto,tombola2fatto;
		 ambo1=false;
		 terno1=false;
		 quaterna1=false;
		 cinquina1=false;
		 tombola1=false;
		 ambo2=false;
				 terno2=false;
				 quaterna2=false;
				  cinquina2=false;
				 tombola2=false;
		 ambo1fatto=false;
				 terno1fatto=false;
				 quaterna1fatto=false;
				 cinquina1fatto=false;
				 tombola1fatto=false;
		 ambo2fatto=false;
				 terno2fatto=false;
				 quaterna2fatto=false;
				 cinquina2fatto=false;
				 tombola2fatto=false;
		 trovato=false;
				 giauscito=false;
				 entrato=false;
	int giocatore[righe][colonne]= {{0,0,0,0,0},
									{0,0,0,0,0},
								   	{0,0,0,0,0}};

	int giocatore2[righe][colonne]= {{0,0,0,0,0},
									 {0,0,0,0,0},
									 {0,0,0,0,0}};

	int tabella[9][10];

	char player1[maxnome], player2[maxnome];

	int i, c, j, x, z=0, num, estratto, conta, scelta, sceltasfondo;

	int vett[maxvett];
	int controllo[maxcontr];

	 ambo1=false, terno1=false, quaterna1=false, cinquina1=false, tombola1=false;
	 ambo2=false, terno2=false, quaterna2=false, cinquina2=false, tombola2=false;
	 ambo1fatto=false, terno1fatto=false, quaterna1fatto=false, cinquina1fatto=false, tombola1fatto=false;
	 ambo2fatto=false, terno2fatto=false, quaterna2fatto=false, cinquina2fatto=false, tombola2fatto=false;
	 trovato=false, giauscito=false, entrato=false;

	printf("Ingrandisci la finestra a schermo intero! :)\n");

	system("pause");

	do{

		system("cls");


		printf("1.Premessa\n");
		printf("2.Impostazioni grafiche\n");
		printf("3.Gioca\n");
		printf("4.Esci\n");
		printf("\n\n");


		fflush(stdin);

		printf("Scelta: ");
		scanf("%d",&scelta);

		switch (scelta){

		case 1:

			entrato=true;

			printf("\n");

			printf("Ciao e grazie per aver scaricato il nostro gioco! :)\n");
			printf("Siamo tre ragazzi che frequentano il terzo superiore e che hanno le conoscenze base del linguaggio c.\n");
			printf("Sappiamo benissimo che il gioco non e' ottimizzato al meglio e che molte cose sarebbero potute essere migliorate e rese piu' efficienti.\n");
			printf("Spero comunque che vi divertiate.");
			printf("Per eventuali problemi o bug vi invito a segnalarci tutto il necessario a questa e-mail: mattia.cotardo@live.it.\n");
			printf("Buon divertimento! :)\n");

			printf("\n\n");

			system("pause");

		break;

		case 2:

			system("cls");

			printf("Scegli il colore dello sfondo:\n");
			puts("1. Rosso");
			puts("2. Verde");
			puts("3. Blu");
			puts("4. Viola");
			puts("5. Verde lime");
			puts("6. Azzurro");
			puts("7. Giallo");
			puts("8. Matrix");
			puts("9. Bianco");

			fflush(stdin);

			scanf("%d",&sceltasfondo);

			switch(sceltasfondo){
				case 1: system("color C0");
				break;
				case 2: system("color 20");
				break;
				case 3: system("color 90");
				break;
				case 4: system("color 50");
				break;
				case 5: system("color A0");
				break;
				case 6: system("color B0");
				break;
				case 7: system("color E0");
				break;
				case 8: system("color 0A");
				break;
				case 9: system("color F0");
				break;
			}
		break;

		case 3:

			 ambo1=false;
				 terno1=false;
				 quaterna1=false;
				 cinquina1=false;
				 tombola1=false;
				 ambo2=false;
						 terno2=false;
						 quaterna2=false;
						  cinquina2=false;
						 tombola2=false;
				 ambo1fatto=false;
						 terno1fatto=false;
						 quaterna1fatto=false;
						 cinquina1fatto=false;
						 tombola1fatto=false;
				 ambo2fatto=false;
						 terno2fatto=false;
						 quaterna2fatto=false;
						 cinquina2fatto=false;
						 tombola2fatto=false;
				 trovato=false;
						 giauscito=false;
			system("cls");

			if(entrato==false){

				printf("Leggiti prima la premessa! :)\n");

				system("pause");

			}else{

	system("cls");

	fflush(stdin);

	printf("Inserisci il nome del primo giocatore (massimo 10 caratteri): ");
	gets(player1);

	printf("Inserisci il nome del secondo giocatore (massimo 10 caratteri): ");
	gets(player2);

	srand(time(NULL));

	//imposto il vettore di controllo a 0

	for(x=0; x<maxcontr; x++)
		controllo[x]=0;

	//INIZIO CARICAMENTO DELLA MATRICE DEL PRIMO GIOCATORE


	//carico la prima colonna con numeri compresi tra 1 e 9

	c=rand()%8+1;
	c++;
	giocatore[0][0]=c;

	do{

		c=rand()%8+1;
		c++;

	}while(c==giocatore[0][0]);

	giocatore[1][0]=c;

	do{

		c=rand()%8+1;
		c++;

	}while(c==giocatore[0][0] || c==giocatore[1][0]);

	giocatore[2][0]=c;


	//carico la seconda colonna con numeri compresi tra 10 e 29


	c=rand()%(29-10)+10;
	c++;
	giocatore[0][1]=c;

	do{

		c=rand()%(29-10)+10;
		c++;

	}while(c==giocatore[0][1]);

	giocatore[1][1]=c;

	do{

		c=rand()%(29-10)+10;
		c++;

	}while(c==giocatore[0][1] || c==giocatore[1][1]);

	giocatore[2][1]=c;


	//carico la terza colonna con numeri compresi tra 30 e 59


	c=rand()%(59-30)+30;
	c++;
	giocatore[0][2]=c;

	do{

		c=rand()%(59-30)+30;
		c++;

	}while(c==giocatore[0][2]);

	giocatore[1][2]=c;

	do{

		c=rand()%(59-30)+30;
		c++;

	}while(c==giocatore[0][2] || c==giocatore[1][2]);

	giocatore[2][2]=c;


	//carico la quarta colonna con numeri compresi tra 60 e 79


	c=rand()%(79-60)+60;
	c++;
	giocatore[0][3]=c;

	do{

		c=rand()%(79-60)+60;
		c++;

	}while(c==giocatore[0][3]);

	giocatore[1][3]=c;

	do{

		c=rand()%(79-60)+60;
		c++;

	}while(c==giocatore[0][3] || c==giocatore[1][3]);

	giocatore[2][3]=c;


	//carico la quinta colonna con numeri compresi tra 80 e 90

	c=rand()%(90-80)+80;
	c++;
	giocatore[0][4]=c;

	do{

		c=rand()%(90-80)+80;
		c++;

	}while(c==giocatore[0][4]);

	giocatore[1][4]=c;

	do{

		c=rand()%(90-80)+80;
		c++;

	}while(c==giocatore[0][4] || c==giocatore[1][4]);

	giocatore[2][4]=c;

	//FINE CARICAMENTO DELLA MATRICE DEL PRIMO GIOCATORE


	//INIZIO CARICAMENTO DELLA MATRICE DEL SECONDO GIOCATORE


	//carico la prima colonna con numeri compresi tra 1 e 9

	c=rand()%8+1;
	c++;
	giocatore2[0][0]=c;

	do{

		c=rand()%8+1;
		c++;

	}while(c==giocatore2[0][0]);

	giocatore2[1][0]=c;

	do{

		c=rand()%8+1;
		c++;

	}while(c==giocatore2[0][0] || c==giocatore2[1][0]);

	giocatore2[2][0]=c;


	//carico la seconda colonna con numeri compresi tra 10 e 29


	c=rand()%(29-10)+10;
	c++;
	giocatore2[0][1]=c;

	do{

		c=rand()%(29-10)+10;
		c++;

	}while(c==giocatore2[0][1]);

	giocatore2[1][1]=c;

	do{

		c=rand()%(29-10)+10;
		c++;

	}while(c==giocatore2[0][1] || c==giocatore2[1][1]);

	giocatore2[2][1]=c;


	//carico la terza colonna con numeri compresi tra 30 e 59


	c=rand()%(59-30)+30;
	c++;
	giocatore2[0][2]=c;

	do{

		c=rand()%(59-30)+30;
		c++;

	}while(c==giocatore2[0][2]);

	giocatore2[1][2]=c;

	do{

		c=rand()%(59-30)+30;
		c++;

	}while(c==giocatore2[0][2] || c==giocatore2[1][2]);

	giocatore2[2][2]=c;


	//carico la quarta colonna con numeri compresi tra 60 e 79


	c=rand()%(79-60)+60;
	c++;
	giocatore2[0][3]=c;

	do{

		c=rand()%(79-60)+60;
		c++;

	}while(c==giocatore2[0][3]);

	giocatore2[1][3]=c;

	do{

		c=rand()%(79-60)+60;
		c++;

	}while(c==giocatore2[0][3] || c==giocatore2[1][3]);

	giocatore2[2][3]=c;


	//carico la quinta colonna con numeri compresi tra 80 e 90

	c=rand()%(90-80)+80;
	c++;
	giocatore2[0][4]=c;

	do{

		c=rand()%(90-80)+80;
		c++;

	}while(c==giocatore2[0][4]);

	giocatore2[1][4]=c;

	do{

		c=rand()%(90-80)+80;
		c++;

	}while(c==giocatore2[0][4] || c==giocatore2[1][4]);

	giocatore2[2][4]=c;

	//FINE CARICAMENTO DELLA MATRICE DEL SECONDO GIOCATORE



	//CARICO LA TABELLA CON I NUMERI DA 1 A 90

	num=1;

	for (i=0; i<9; i++){
		for (j=0; j<10; j++){
			tabella[i][j]=num;
			num++;
		}
	}


	estratto=0;

	//INIZIO GIOCO

	do{

	system ("cls");


	//sostituisco con uno 0 i numeri gia usciti

	//PRIMO GIOCATORE
	for (i=0; i<righe; i++){
		for (j=0; j<colonne; j++){
			if(giocatore[i][j]==estratto)
				giocatore[i][j]=0;
		}
	}

	//ciclo AMBO primo giocatore
	if(ambo==false){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[0][j]==0)
				conta++;
			}

		if (conta==2){
			ambo1=true;
			ambo=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[1][j]==0)
				conta++;
			}

		if (conta==2){
			ambo1=true;
			ambo=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[2][j]==0)
				conta++;
			}

		if (conta==2){
			ambo1=true;
			ambo=true;
		}

	}


	//ciclo TERNO primo giocatore
	if(ambo==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[0][j]==0)
				conta++;
			}

		if (conta==3){
			terno1=true;
			terno=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[1][j]==0)
				conta++;
			}

		if (conta==3){
			terno1=true;
			terno=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[2][j]==0)
				conta++;
			}

		if (conta==3){
			terno1=true;
			terno=true;
		}

	}

	//ciclo QUATERNA primo giocatore
	if(terno==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[0][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna1=true;
			quaterna=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[1][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna1=true;
			quaterna=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[2][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna1=true;
			quaterna=true;
		}

	}

	//ciclo CINQUINA primo giocatore
	if(quaterna==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[0][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina1=true;
			cinquina=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[1][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina1=true;
			cinquina=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore[2][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina1=true;
			cinquina=true;
		}

	}

	//ciclo TOMBOLA primo giocatore

	conta=0;

	for (i=0; i<righe; i++)
		for (j=0; j<colonne; j++)
			if (giocatore[i][j]==0)
				conta++;

	if(conta==15)
		tombola1=true;


	//SECONDO GIOCATORE
	for (i=0; i<righe; i++){
		for (j=0; j<colonne; j++){
			if(giocatore2[i][j]==estratto)
				giocatore2[i][j]=0;
		}
	}


	//ciclo AMBO secondo giocatore
	if(ambo==false){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[0][j]==0)
				conta++;
			}

		if (conta==2){
			ambo2=true;
			ambo=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[1][j]==0)
				conta++;
			}

		if (conta==2){
			ambo2=true;
			ambo=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[2][j]==0)
				conta++;
			}

		if (conta==2){
			ambo2=true;
			ambo=true;
		}

	}


	//ciclo TERNO secondo giocatore
	if(ambo==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[0][j]==0)
				conta++;
			}

		if (conta==3){
			terno2=true;
			terno=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[1][j]==0)
				conta++;
			}

		if (conta==3){
			terno2=true;
			terno=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[2][j]==0)
				conta++;
			}

		if (conta==3){
			terno2=true;
			terno=true;
		}

	}

	//ciclo QUATERNA secondo giocatore
	if(terno==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[0][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna2=true;
			quaterna=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[1][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna2=true;
			quaterna=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[2][j]==0)
				conta++;
			}

		if (conta==4){
			quaterna2=true;
			quaterna=true;
		}

	}


	//ciclo CINQUINA secondo giocatore
	if(quaterna==true){

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[0][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina2=true;
			cinquina=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[1][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina2=true;
			cinquina=true;
		}

		conta=0;
		for (j=0; j<colonne; j++){
			if (giocatore2[2][j]==0)
				conta++;
			}

		if (conta==5){
			cinquina2=true;
			cinquina=true;
		}

	}


	//ciclo TOMBOLA secondo giocatore

	conta=0;

	for (i=0; i<righe; i++)
		for (j=0; j<colonne; j++)
			if (giocatore2[i][j]==0)
				conta++;

	if(conta==15)
		tombola2=true;



	//STAMPO LA SCHEDA DEL PRIMO GIOCATORE

	printf("La scheda di %s e': \n",player1);

	printf("-----------------------------------\n");
	for (i=0; i<righe; i++){
		for (j=0; j<colonne; j++){
			printf("%d",giocatore[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("-----------------------------------\n");

	printf("\n\n");

	//STAMPO LE VINCITE DEL PRIMO GIOCATORE

	if((ambo1==true && ambo2==false) || ambo1fatto==true){
		printf("%s ha fatto AMBO!\n\n",player1);
		ambo1fatto=true;
	}

	if((terno1==true && terno2==false) || terno1fatto==true){
		printf("%s ha fatto TERNO!\n\n",player1);
		terno1fatto=true;
	}

	if((quaterna1==true && quaterna2==false) || quaterna1fatto==true){
		printf("%s ha fatto QUATERNA!\n\n",player1);
		quaterna1fatto=true;
	}

	if((cinquina1==true && cinquina2==false) || cinquina1fatto==true){
		printf("%s ha fatto CINQUINA!\n\n",player1);
		cinquina1fatto=true;
	}


	if(tombola1==true){
		system("cls");
		printf("%s ha fatto...\n\n",player1);

		printf("***********   **********   ****      ****   **********    **********   **                  **          ***\n");
		printf("***********   **********   ** **    ** **   **       **   **********   **                 ****         ***\n");
		printf("    **        **      **   **  **  **  **   **       **   **      **   **                **  **        ***\n");
		printf("    **        **      **   **   ****   **   **      **    **      **   **               **    **       ***\n");
		printf("    **        **      **   **          **   **********    **      **   **              **********      ***\n");
		printf("    **        **      **   **          **   **       **   **      **   **             **        **        \n");
		printf("    **        **********   **          **   **       **   **********   **********    **          **    ***\n");
		printf("    **        **********   **          **   **********    **********   **********   **            **   ***\n");

		system("color 20");
		Sleep(100);
		system("color 30");
		Sleep(100);
		system("color 50");
		Sleep(100);
		system("color 90");
		Sleep(100);
		system("color A0");
		Sleep(100);
		system("color B0");
		Sleep(100);
		system("color C0");
		Sleep(100);
		system("color D0");
		Sleep(100);
		system("color E0");
		Sleep(100);
		system("color 20");
		Sleep(100);
		system("color 30");
		Sleep(100);
		system("color 50");
		Sleep(100);
		system("color 90");
		Sleep(100);
		system("color A0");
		Sleep(100);
		system("color B0");
		Sleep(100);
		system("color C0");
		Sleep(100);
		system("color D0");
		Sleep(100);
		system("color E0");
		Sleep(100);
		system("color 0A");


		system("pause");

	}


	//STAMPO LA SCHEDA DEL SECONDO GIOCATORE

	printf("La scheda di %s e': \n",player2);

	printf("-----------------------------------\n");
	for (i=0; i<righe; i++){
		for (j=0; j<colonne; j++){
			printf("%d",giocatore2[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("-----------------------------------\n");

	printf("\n\n");

	//STAMPO LE VINCITE DEL SECONDO GIOCATORE

	if((ambo2==true && ambo1==false) || ambo2fatto==true){
		printf("%s ha fatto AMBO!\n\n",player2);
		ambo2fatto=true;
	}

	if((terno2==true && terno1==false) || terno2fatto==true){
		printf("%s ha fatto TERNO!\n\n",player2);
		terno2fatto=true;
	}

	if((quaterna2==true && quaterna1==false) || quaterna2fatto==true){
		printf("%s ha fatto QUATERNA!\n\n",player2);
		quaterna2fatto=true;
	}

	if((cinquina2==true && cinquina1==false) || cinquina2fatto==true){
		printf("%s ha fatto CINQUINA!\n\n",player2);
		cinquina2fatto=true;
	}

	if(tombola2==true){
		system("cls");
		printf("%s ha fatto...\n\n",player2);

		printf("***********   **********   ****      ****   **********    **********   **                  **          ***\n");
		printf("***********   **********   ** **    ** **   **       **   **********   **                 ****         ***\n");
		printf("    **        **      **   **  **  **  **   **       **   **      **   **                **  **        ***\n");
		printf("    **        **      **   **   ****   **   **      **    **      **   **               **    **       ***\n");
		printf("    **        **      **   **          **   **********    **      **   **              **********      ***\n");
		printf("    **        **      **   **          **   **       **   **      **   **             **        **        \n");
		printf("    **        **********   **          **   **       **   **********   **********    **          **    ***\n");
		printf("    **        **********   **          **   **********    **********   **********   **            **   ***\n");

		system("color 20");
		Sleep(100);
		system("color 30");
		Sleep(100);
		system("color 50");
		Sleep(100);
		system("color 90");
		Sleep(100);
		system("color A0");
		Sleep(100);
		system("color B0");
		Sleep(100);
		system("color C0");
		Sleep(100);
		system("color D0");
		Sleep(100);
		system("color E0");
		Sleep(100);
		system("color 20");
		Sleep(100);
		system("color 30");
		Sleep(100);
		system("color 50");
		Sleep(100);
		system("color 90");
		Sleep(100);
		system("color A0");
		Sleep(100);
		system("color B0");
		Sleep(100);
		system("color C0");
		Sleep(100);
		system("color D0");
		Sleep(100);
		system("color E0");
		Sleep(100);
		system("color 0A");
		Sleep(100);

		system("pause");

	}

	if(tombola1==false && tombola2==false){

	//STAMPO LA TABELLA

	printf("TABELLA: \n\n");

	for (i=0; i<9; i++){
		for (j=0; j<10; j++){
			printf("%d",tabella[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	system("pause");
	printf("\n\n");





	printf("Estrazione");

	for(i=0;i<3;i++) {
		Sleep(400); printf(".");
	}




	//controllo sull'estrazione

		do{

		giauscito=true;

		estratto=rand()%90+1;
		//estratto++;


		for (i=0; i<9; i++)
			for (j=0; j<10; j++)
				if (tabella[i][j]==estratto)
					giauscito=false;

		}while(giauscito==true);


	printf("\n");
	printf("Numero estratto: %d\n\n\n",estratto);

	system ("pause");

	//sostituisco con un 0 i numeri gia estratti

	for (i=0; i<9; i++){
		for (j=0; j<10; j++){
			if(tabella[i][j]==estratto)
				tabella[i][j]=0;
		}
	}

	}

	}while(tombola1==false && tombola2==false);

	}


	break;

}//fine switch


}while(scelta!=4);

	system ("cls");
	system ("color C0");

	printf(" *********          *         ****      ****  *********      **********  **             **  *********  ********\n");
	printf(" *********         ***        ** **    ** **  *********      **********   **           **   *********  **     **\n");
	printf("**                ** **       **  **  **  **  **             **      **    **         **    **         **      **\n");
	printf("**               **   **      **   ****   **  *********      **      **     **       **     *********  **     **\n");
	printf("**       **     **     **     **          **  *********      **      **      **     **      *********  ********\n");
	printf("**       **    ***********    **          **  **             **      **       **   **       **         ******\n");
	printf(" **********   **         **   **          **  *********      **********        ** **        *********  **   **\n");
	printf(" **********  **           **  **          **  *********      **********          *          *********  **    **\n");

	printf("\n\n");

	printf("Realizzato dagli alunni della classe III A\nITIS E.Mattei di Maglie:\nCotardo Mattia\nCoppola Lorenzo\nGnai Mario\n");

	Sleep (700);

	system ("pause");
	return 0;
}

