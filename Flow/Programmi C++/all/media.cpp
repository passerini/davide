#include <iostream>

#define N 8

int main()
{
	int vett[N];
	int somma;
	float media;

	for (int i = 0; i < N; i++)
	{

		printf("inserisci il numero da aggiungere al vettore:");
		scanf("%d", &vett[i]);
	}

	somma = 0;
	for (int i = 0; i < N; i++)
	{
		somma = somma + vett[i];
	}

	printf("la somma e': %d\n", somma);
	media = somma / N;

	printf("la media e' %f\n", media);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", vett[i]);
	}

	for (int i = 0; i < N; i++)
	{
		vett[i] = vett[i] * 3;
	}
	printf("stampo il vettore per 3 \n");
	for (int i = N - 1; i >= 0; i--)
	{
		printf("%d\n", vett[i]);
	}

	return 0;
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare:
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln