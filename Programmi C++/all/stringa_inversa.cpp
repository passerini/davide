// Rovesciare_stringa.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <stdio.h>
#include <string.h>

#define VALORE_MASSIMO 300

int main()
{
   
	char stringa[VALORE_MASSIMO];
	int lunghezza;

	printf("inserisci una stringa \n");

	gets(stringa);

	lunghezza = strlen(stringa);

	printf("la stringa rovesciata e' \n");

	for (int i = lunghezza; i >= 0; i--)
	{
		printf("%c", stringa[i]);
	}
}
