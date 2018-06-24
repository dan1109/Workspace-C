///*******************************************************STRINGHE*************************************************************///
/*Il programma prende in input una frase e trasforma ogni punto in essa contenuto in un ritorno a capo*/
#include <stdio.h>
#include <stdlib.h>
#define max 100
char  modifica(char *,int );
int main()
{
    char frase[max];
    int lung;

    printf("Inserisci la frase:\n");
    gets(frase);
    printf("La frase inserita e':\n");
    puts(frase);
    lung=strlen(frase);
    printf("Questa frase e' lunga %d caratteri.\n",lung);

    printf("La frase modificata e':\n\n");
    modifica(frase,lung);

    system("pause");
    return 0;
}
char modifica(char frase[],int lung)
{
    int i;
    char newfrase[max];
     for(i=0;i<=lung;i++){

            if(frase[i]=='.'){newfrase[i]='\n';}
            else{newfrase[i]=frase[i];}

    }

    return puts(newfrase);

}
