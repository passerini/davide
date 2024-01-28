// Rovesciare_stringa.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#define VALORE_MASSIMO 300

int main()
{
   
	char stringa[VALORE_MASSIMO];
	int lunghezza;

	printf_s("inserisci una stringa \n");

	gets_s(stringa, VALORE_MASSIMO);

	lunghezza = strlen(stringa);

	printf_s("la stringa rovesciata e' \n");

	for (int i = lunghezza; i >= 0; i--)
	{
		printf_s("%c", stringa[i]);
	}
}
