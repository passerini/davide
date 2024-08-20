#include <stdio.h>
#include <iostream>
#include <cstring>
#define VALORE_MASSIMO 30

int main(){
    char frase[VALORE_MASSIMO];
    int lunghezza_frase;
    int contatore;

    printf("inserisci una frase: \n");

    gets(frase);

    lunghezza_frase = strlen(frase);

    contatore=1;

for ( int i = 0; i < lunghezza_frase; i++)
{
    char carattere_frase = frase[i];

     if (  carattere_frase == ' ')
    {
       printf("trovato una parola \n");

       contatore++;

    }
   printf("le parole sono: %d \n", contatore); 
}



    
}