#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLUMNS 10

typedef struct
{
	char matrixName; // Nome della matrice. Ex: 'A'    'B'    'C'
	int cols; // Numero di COLONNE della matrice
	int rows;   // Numero di RIGHE della matrice
	float matrix[ROWS * COLUMNS]; // Matrice di dimensione massima 10 * 10 = 100
}
matrice_mono_dim;

// PER LA DOCUMENTAZIONE, RIFERIRSI ALLE DEFINIZIONI DI FUNZIONE POSTE SOTTO AL main()

void setMatrixMonoDim(matrice_mono_dim *m, int row, int col, float value, int should_transpose);
float getMatrixMonoDim(matrice_mono_dim *m, int row, int col);

float prodMatrixMonoDim(matrice_mono_dim *m, int row, int col, int value);
float sumMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, int row, int col);
float prodPairsMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, int row, int col);

void fillMatrixMonoDim(matrice_mono_dim *m);
void doWantToFill(int num_of_matrixs, matrice_mono_dim *m_A, matrice_mono_dim *m_B);

void totalSumMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, matrice_mono_dim *m_C);
void scalarProdMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_C);
void prodOfMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, matrice_mono_dim *m_C);
void transposeMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_C);

// ________________________________________________________________________________________________________________________________
int main(void)
{
	matrice_mono_dim matrix_A = {.matrixName = 'A', .rows = 2, .cols = 2};
	matrice_mono_dim matrix_B = {.matrixName = 'B', .rows = 2, .cols = 2};
	matrice_mono_dim matrix_C = {.matrixName = 'C', .rows = 2, .cols = 2};

	totalSumMatrixMonoDim(&matrix_A, &matrix_B, &matrix_C);
	scalarProdMatrixMonoDim(&matrix_A, &matrix_C);
	prodOfMatrixMonoDim(&matrix_A, &matrix_B, &matrix_C);
	transposeMatrixMonoDim(&matrix_A, &matrix_C);

	system("PAUSE");
	return 0;
}
// ________________________________________________________________________________________________________________________________

// Inserisce un valore nella matrice m, data la riga, la colonna ed un valore.
// Il should_transpose effettua la trasposta di un valore nella stessa matrice a seconda se:
//		should_transpose = 1 (Effettua la trasposta)
//		should_transpose = 0 (Ritorna il valore nella posizione normale)
void setMatrixMonoDim(matrice_mono_dim *m, int row, int col, float value, int should_transpose)
{
	if (should_transpose == 0)
	{
		m->matrix[row * m->cols + col] = value;
		return;
	}
	else
	{
		m->matrix[col * m->rows + row] = value;
		return;
	}
}
// Acquisisce un valore dalla matrice m data la riga e la colonna
float getMatrixMonoDim(matrice_mono_dim *m, int row, int col)
{
	return m->matrix[row * m->cols + col];
}
// Somma i valori delle matrici in una posizione data e li restituisce
float sumMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, int row, int col)
{
	return m_A->matrix[row * m_A->cols + col] + m_B->matrix[row * m_B->cols + col];
}
// Effettua il prodotto tra un valore della matrice m data la riga e la colonna, e un valore
float prodMatrixMonoDim(matrice_mono_dim *m, int row, int col, int value)
{
	return m->matrix[row * m->cols + col] * value;
}
// Effettua il prodotto tra due matrici e ne stampa il risultato
float prodPairsMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, int row, int col)
{
	return m_A->matrix[row * m_A->cols + col] * m_B->matrix[row * m_B->cols + col];
}
// Effettua la lettura dei dati da inserire nella matrice
void fillMatrixMonoDim(matrice_mono_dim *m)
{
	int i = 0, j = 0;
	float tmp = 0;

	printf("\nRiempimento della matrice %c\n", m->matrixName);

	while (j < m->rows)
	{
		i = 0;
		while (i < m->cols)
		{
			printf("Valore in posizione %i = ", j * m->rows + i + 1);
			scanf("%f", &tmp);
			setMatrixMonoDim(m, j, i, tmp, 0);
			i++;
		}
		j++;
	}
	j++;
	printf("\nRiempimento completato\n");
}
// Chiede all'utente se vuole reinserire i valori delle matrici
void doWantToFill(int num_of_matrixs, matrice_mono_dim *m_A, matrice_mono_dim *m_B)
{
	// Prende una risposta come input, che può essere sì o no (y/n)
	char answer = 'n';
	printf("\nVuoi riempire le matrici? [y/n] ");
	scanf("%c", &answer);

	// Se si risponde di sì (answer = 'y'), si chiede il riempimento di num_of_matrixs matrici.
	// Per num_of_matrixs diverso da 1 o 2, si prosegue con i valori già inseriti in precedenza.
	if (answer == 'y')
	{
		system("cls");
		switch (num_of_matrixs)
		{
		case 1:
			printf("\nPer la prossima operazione, devi solo riempire una matrice\n");
			fillMatrixMonoDim(m_A);
			break;

		case 2:
			printf("\nPer la prossima operazione, devi riempire entrambe le matrici\n");
			fillMatrixMonoDim(m_A);
			fillMatrixMonoDim(m_B);
			break;

		default:
			printf("\nERRORE NEL CODICE: numero di matrici non valido, si prosegue con i valori precedenti\n");
			break;
		}
	}
	else
	{
		if (answer == 'n') //Se si risponde di no (answer = 'n'), si prosegue come nulla fosse.
			printf("\nOK, proseguiamo come se non te l'avessi chiesto.\n");
		else
		{
			// Se non si riconosce la risposta, la funzione viene richiamata finché la risposta non è definita tra le possibili (y/n)
			printf("\nNon ho capito, scusami, puoi ripetere...?\n");
			doWantToFill(num_of_matrixs, m_A, m_B);
		}
	}

	return;
}
// Effettua la somma tra due matrici e la salva in una terza matrice
void totalSumMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, matrice_mono_dim *m_C)
{
	int i = 0, j = 0;

	// FASE DI LETTURA
	doWantToFill(2, m_A, m_B);

	// FASE DI SOMMA
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			m_C->matrix[j * m_C->cols + i] = sumMatrixMonoDim(m_A, m_B, j, i);
			i++;
		}
		j++;
	}

	// FASE DI STAMPA
	printf("\nSomma delle due matrici\n\n");

	j = 0;
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			printf("Somma in posizione %i: %1.0f + %1.0f = %1.0f\n",
					j * m_C->rows + i + 1,
					getMatrixMonoDim(m_A, j, i),
					getMatrixMonoDim(m_B, j, i),
					getMatrixMonoDim(m_C, j, i));
			i++;
		}
		j++;
	}

	printf("\nStampa completata\n");
	return;
}
// Effettua il prodotto scalare tra una matrice ed un valore
void scalarProdMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_C)
{
	int i = 0, j = 0, k = 0;

	// FASE DI LETTURA
	doWantToFill(1, m_A, m_C); // matrice_C è un work-around. Serve solo per eseguire la funzione.

	// FASE DI PRODOTTO
	printf("\nInserire un valore per effettuare il prodotto scalare: ");
	scanf("%i", &k);
	printf("\nProdotto scalare di matrice per un valore\n\n");

	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			setMatrixMonoDim(m_C, j, i, prodMatrixMonoDim(m_A, j, i, k), 0);
			i++;
		}
		j++;
	}

	// FASE DI STAMPA
	j = 0;
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			printf("Prodotto scalare in posizione %i: %1.0f * %i = %1.0f\n",
					j * m_C->rows + i + 1,
					getMatrixMonoDim(m_A, j, i),
					k,
					getMatrixMonoDim(m_C, j, i));
			i++;
		}
		j++;
	}

	printf("\nStampa completata\n");
	return;
}
// Effettua il prodotto tra due matrici
void prodOfMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_B, matrice_mono_dim *m_C)
{
	int i = 0, j = 0;

	// FASE DI LETTURA
	doWantToFill(2, m_A, m_B);

	// FASE DI PRODOTTO
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			setMatrixMonoDim(m_C, j, i, prodPairsMatrixMonoDim(m_A, m_B, j, i), 0);
			i++;
		}
		j++;
	}

	// FASE DI STAMPA
	j = 0;
	printf("\nProdotto tra due matrici\n\n");
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			printf("Prodotto in posizione %i: %1.0f * %1.0f = %1.0f\n",
					j * m_C->rows + i + 1,
					getMatrixMonoDim(m_A, j, i),
					getMatrixMonoDim(m_B, j, i),
					getMatrixMonoDim(m_C, j, i));
			i++;
		}
		j++;
	}

	printf("\n\nStampa completata\n\n");
	return;
}
// Effettua la trasposta di una matrice date n_colonne ed n_righe;
void transposeMatrixMonoDim(matrice_mono_dim *m_A, matrice_mono_dim *m_C)
{
	int i = 0, j = 0;

	// FASE DI LETTURA
	doWantToFill(1, m_A, m_C);

	// FASE DI TRASPOSTA
	j = 0;
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			setMatrixMonoDim(m_C, j, i, getMatrixMonoDim(m_A, j, i), 1);
			i++;
		}
		j++;
	}

	//FASE DI STAMPA
	j = 0;
	printf("\nTrasposta della matrice\n");
	while (j < m_C->rows)
	{
		i = 0;
		while (i < m_C->cols)
		{
			printf("Valore trasposto in posizione %i: %1.0f\n",
					j * m_C->rows + i + 1,
					getMatrixMonoDim(m_C, j, i));
			i++;
		}
		j++;
	}
}

