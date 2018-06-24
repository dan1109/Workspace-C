/*
 * giocodeltris.c
 *
 *  Created on: 23 dic 2016
 *      Author: Daniele
 */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
    int n=3,i,j,posx,posy,cont1=0,cont2=0,v1,v2,r,flag,x,o;
    char scelta,mat[n][n],g1[15],g2[15];
    for(i=0;i<n;i++) //popolo matrice con spazi
    {
        for(j=0;j<n;j++)
        mat[i][j]=' ';
    }
    printf("\n Vuoi Giocare A Tris (s/n)? - ");
    scelta=getch();
    if(scelta=='s'||scelta=='S') //inizio del gioco
    {
        printf("\n Inserisci Nome Giocatore 1: ");
        scanf("%s",&g1);
        printf("\n Inserisci Nome Giocatore 2: ");
        scanf("%s",&g2);
        do
        {
        printf("\n Quante Round Vuoi Giocare? (1/3/5) : "); //scelta numero di round
        scanf("%d",&r);
        }
        while(r!=1&&r!=3&&r!=5);
        do
        {
        do
        {
            printf("\n %s Scegli la posizione orizzontale della %da X: ",g1,cont1+1);
            scanf("%d",&posx);
            printf("\n %s Scegli la posizione verticale della %da X: ",g1,cont1+1);
            scanf("%d",&posy);
            mat[posx][posy]='X';
            cont1++;
            for(i=0;i<n;i++) //mostra la corrente posizione delle x e degli o
                {
                    printf("\n");
                    for(j=0;j<n;j++)
                    printf("%c \t ",mat[i][j]);
                }
            if(mat[0][0]==mat[0][1]&&mat[0][1]==mat[0][2]&&mat[0][0]=='X') //inizio controlli vittoria v1 //tutta la 1a riga
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[1][0]==mat[1][1]&&mat[1][1]==mat[1][2]&&mat[1][0]=='X') //tutta la 2a riga
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[2][0]==mat[2][1]&&mat[2][1]==mat[2][2]&&mat[2][0]=='X') //tutta la 3a riga
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[0][0]==mat[1][0]&&mat[1][0]==mat[2][0]&&mat[0][0]=='X') //tutta la 1a colonna
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[0][1]==mat[1][1]&&mat[1][1]==mat[2][1]&&mat[0][1]=='X') //tutta la 2a colonna
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[0][2]==mat[1][2]&&mat[1][2]==mat[2][2]&&mat[0][2]=='X') //tutta la 3a colonna
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[0][0]==mat[1][1]&&mat[1][1]==mat[2][2]&&mat[0][0]=='X') //tutta la diagonale principale
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            if(mat[0][2]==mat[1][1]&&mat[1][1]==mat[0][2]&&mat[0][2]=='X') //tutta la diagonale secondaria
            {
                v1++;
                printf("\n %s Hai Vinto Questo Round!",g1);
                flag=9;
            }
            flag++; //valore di controllo per non superare i nove segni nella matrice
            printf("\n %s Scegli la posizione orizzontale del %do O: ",g2,cont2+1);
            scanf("%d",&posx);
            printf("\n %s Scegli la posizione verticale del %do O: ",g2,cont2+1);
            scanf("%d",&posy);
            mat[posx][posy]='O';
            cont2++;
            for(i=0;i<n;i++) //mostra la corrente posizione delle x e degli o
            {
                printf("\n");
                for(j=0;j<n;j++)
                printf("%c \t ",mat[i][j]);
            }
            if(mat[0][0]==mat[0][1]&&mat[0][1]==mat[0][2]&&mat[0][0]=='O') //inizio controlli vittoria v2  //tutta la 1a riga
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[1][0]==mat[1][1]&&mat[1][1]==mat[1][2]&&mat[1][0]=='O') //tutta la 2a riga
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[2][0]==mat[2][1]&&mat[2][1]==mat[2][2]&&mat[2][0]=='O') //tutta la 3a riga
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[0][0]==mat[1][0]&&mat[1][0]==mat[2][0]&&mat[0][0]=='O') //tutta la 1a colonna
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[0][1]==mat[1][1]&&mat[1][1]==mat[2][1]&&mat[0][1]=='O') //tutta la 2a colonna
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[0][2]==mat[1][2]&&mat[1][2]==mat[2][2]&&mat[0][2]=='O') //tutta la 3a colonna
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[0][0]==mat[1][1]&&mat[1][1]==mat[2][2]&&mat[0][0]=='O') //tutta la diagonale principale
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            if(mat[0][2]==mat[1][1]&&mat[1][1]==mat[0][2]&&mat[0][2]=='O') //tutta la diagonale secondaria
            {
                v2++;
                printf("\n %s Hai Vinto Questo Round!",g2);
                flag=9;
            }
            flag++; //valore di controllo per non superare i nove segni nella matrice
    }
    while(flag!=9);
    printf("\n Parita'!");
    }
    while(v1=((r/2)+1)||(v2=(r/2)+1));
    if(v1=(r/2)+1)
    printf("%s hai vinto la partita! Compimenti!",g1);
    else
    printf("%s hai vinto la partita! Compimenti!",g2);


    }
    return 0;
}

