///***************************************STRINGA AL CONTRARIO*************************************************************\\\
/*Questa programma prende una stringa di char in imput  e la restituisce al contrario*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000

int  contr(char [],int);

int main()
{
  int i=0,dim;
  char par[max];

  printf("\nInserisci una parola o una frase qualsiasi:\n");

  gets(par);

  printf("\n");
  dim=(strlen(par)-1);

  contr(par,dim);

  printf("\n");
  system("pause");
    return 0;
}
 int contr(char vett[],int dim)
{
  if(dim>=0){

    printf("%c",vett[dim]);
    dim--;

    }
    else return 0;

   return contr(vett,dim);
}
