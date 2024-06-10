// vettori.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.

#include <iostream>
#define  N 8


int main()
{
	int vett[N], somma;
	float media;                           

	for (int i = 0; i < N; i++) {
		                                                
		printf("inserisci il numero:");                  
		scanf("%d", &vett[i]);
	}


	somma = 0;
	for (int i = 0; i < N; i++) {
		somma = somma + vett[i];

	}

	printf("la somma e': %d\n", somma);
	media = somma / N;

	printf("la media e' %f\n", media);

	for (int i = 0; i < N; i++) {
		printf("%d\n", vett[i]);
	}


	for (int i = 0; i < N; i++) {
		vett[i] = vett[i] * 3;
	}
	printf("stampo il vettore per 3 \n");
	for (int i = N-1; i>=0; i--) {
		printf("%d\n", vett[i]);
	}
	

	return 0;
}