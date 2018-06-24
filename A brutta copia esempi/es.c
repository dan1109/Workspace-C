
// commento di cose

/*__________________________________________________________________________________
 *   while (!(feof(f1)))
 *   indichiamo che il puntatore ancora non arriva a feof
_________________________________________________________________________________________________
 *   definizione di struttura statica
 *   static struct
     romantable {
     int value;
     char *roman;
	}
	romanTable[18] = {

	{  1000000000, "||M||" },{ 1000000, "|M|" },
	{ 10000, "|X|" },{ 100000, "|C|" },{ 5000, "|V|" },
	{ 1000, "M" }, { 900, "CM" }, { 500, "D" }, { 400, "CD" },
	{ 100 , "C" }, { 90 , "XC" }, { 50 , "L" }, { 40 , "XL" },
	{ 10 , "X" }, { 9 , "IX" }, { 5 , "V" }, { 4 , "IV" },
	{ 1 , "I" }
	};
__________________________________________________________________________________
passaggio di vettori a una funzione
stampa_valori_presenti(int i,int unici[],int ripeti[]);
void stampa_colonna(int x[MAX][MAX], int c, int n);
__________________________________________________________________________________
matrice:                             char vocab[2][20];
ottengo la parola:	                  gets(vocab[i]);
ottengo la unghezza della parola:    max = strlen(vocab[0]);
________________________________________________________________________________
potenza di k elevato a i in math.h    pow(k,i)
_________________________________________________________________________________
se il resto della divisione  tra n e k è diverso da zero  n%k != 0
_________________________________________________________________________________
//Invertire elementi di un vettore di dimensione 5//
n=5;
for (i=0;i<2; i++)
	{
		k = vettore[i];
		vettore[i] = vettore[n-1 -i];
		vettore[n-1 -i] = k;
________________________________________________________________________________
 * n = leggi_array(A);
 * questo modo di scrivere ti fa usare leggi_array che restituisce un intero
_________________________________________________________________________________
   inizio di una randomizzazione
 *  srand((unsigned) time(NULL));

n = genera(&M[0][0]);
int genera(int *m);
altro metodo per passare una matrice,come fosse un valore,
__________________________________________________________________________________
 target(matrice,&righe,&colonne,&valore_target);
 int target(int matrice[][C],int *righe,int *colonne,int *valore_target);
*
*abbiamo una matrice statica comunque esempio di prototipo,non abbiamo &
_____________________________________________________________________________________

 * --Allocazione dinamica di 2 puntatori di 2 tipi strutture, per contenere esattamente il numero di alberghi desiderati dall'utente//
   (il vettore)  elementi=((struttura)nuovi*)malloc(limite*sizeof((struttura)nuovi));
    vettore=(voli*)malloc(limite*sizeof(voli));
__________________________________________________________________________________
   ptr=fopen("alberghi.txt","r");
   mettere il file.txt nel percorso dove sta l'applicazione
 _______________________________________________________________________________
   void leggi()
{
   spesa(consumi,&unitacontrattuali,&totquote);
    stampa(totquote);
    }
    due funzioni in una che a sua volta sta ne main,
    per l'uso di una malloc per leggere un file
_____________________________________________________________________________________
fscanf(ptr,"%f\n",&consumi[i]);
significa che nella lettura stai andando a leggere il prosssimo valore a capo
_________________________________________________________________________________



 */

