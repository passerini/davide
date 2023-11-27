// ricerca di un vettore.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#define N 8

int main()
{

	int V[N];
	int cerca;
	int i, x;
	int posizione = -1;

	// for (x = 0; x < N; x++)
	// {
	// 	printf("\n Ciao");
	// }

	for (i = 0; i < N; i++)
	{
		printf("\n inserisci elemento \n");
		scanf("%d", &V[i]);
	}

	printf("inserisci il valore da cercare \n");
	scanf("%d", &cerca);

	for (i = 0; i < N; i++)
	{
		if (V[i] == cerca)
		{
			posizione = i;
		}
	}

	if (i == -1)
	{
		printf("scrivi valore non trovato \n");
	}
	else
	{
		printf("la posizione e' %d", posizione);
	}
}
