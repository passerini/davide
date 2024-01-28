//Scrivi un programma che prende una stringa inserita dall'utente e conta il numero di parole in quella stringa. Puoi considerare una parola come una sequenza di caratteri separata da spazi.
//La stringa non può superare i 300 caratteri.

#include <iostream>
#define VALORE_MASSIMO 300

int main()
{
	char stringa[VALORE_MASSIMO];
	int spazio;
	int contatore;
	int lunghezza;

	printf_s("inserisci una frase \n");

	gets_s(stringa, VALORE_MASSIMO);

	lunghezza = strlen(stringa);

	contatore = 1;

	for (int i = 0; i < lunghezza; i++)
	{
		char carattere_della_frase = stringa[i];
		char carattere_spazio = ' ';

		if (carattere_della_frase == carattere_spazio) {
			printf_s("ho trovato una parola \n");
			contatore++;
		}
	}

	printf_s("le parole sono : %d", contatore);
}
