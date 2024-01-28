// Scrivi un programma che chiede all'utente di inserire due stringhe. Il programma deve determinare se la seconda stringa è una sottostringa della prima e stampare un messaggio appropriato.

// Le stringhe non devono superare i 300 caratteri

#include <iostream>
#define VALORE_MASSIMO 300

int main()
{
	char frase[VALORE_MASSIMO];
	char sotto_frase[VALORE_MASSIMO];

	printf_s("inserisci la prima frase \n");
	gets_s(frase, VALORE_MASSIMO);

	printf_s("inserisci la seconda frase \n");
	gets_s(sotto_frase, VALORE_MASSIMO);

	if (strstr(frase, sotto_frase) != NULL)
	{
		printf_s("la seconda stringa e' una sottostringa della prima \n");
	}
	else
	{
		printf_s("la seconda stringa non e' una sottostringa della prima \n");
	}
}