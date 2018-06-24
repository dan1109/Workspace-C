/*
 * succparedisp.c
 *
 *  Created on: 11 gen 2017
 *      Author: Daniele
 */
/*
**  successione.c
**
**  Leggere in input una sequenza A di n numeri interi. Stampare in
**  output la successione B calcolata secondo la seguente regola:
**
**    B(0) = A(0)
**    B(i) = B(i-1) + A(i) se A(i) e' pari
**    B(i) = B(i-1) - A(i) se A(i) e' dispari
**
**  Marco Liverani (liverani@mat.uniroma3.it) - Aprile 2001
*/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

/*
 *  Legge in input un vettore di interi. Restituisce il numero
 *  di elementi letti.
 */

int leggi_array(int V[]) {
  int i, n;

  printf("Numero di elementi: ");
  scanf("%d", &n);
  for (i=0; i<n; i++)
    scanf("%d", &V[i]);
  return(n);
}

/*
 *  Funzione principale.
 */

int main(void) {
  int i, n, x, A[MAX];
  n = leggi_array(A);
  x = A[0];
  printf("b[0] = %d\n", x);
  for (i=1; i<n; i++) {
    if (A[i] % 2 == 0)
      x = x + A[i];
    else
      x = x - A[i];
    printf("b[%d] = %d\n", i, x);
  }
  system("pause");
  return(1);
}


