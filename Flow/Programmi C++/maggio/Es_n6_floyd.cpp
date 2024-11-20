
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(){

	int numero_righe,numero = 0;

	printf("\nTRIANGOLO DI FLOYD \n");
    
    printf("Inserisci il numero di righe che vuoi generare ");
	scanf("%d", &numero_righe);

    int numero_temporaneo = numero;
    for (int i = 0; i < numero_righe; i++)
    {
        for (int i = 0; i < numero; i++)
        {
            printf("%d ",numero_temporaneo);
            numero_temporaneo = numero_temporaneo + 1;
        }
        printf("\n");
        numero++;
    }

	return 0;
}