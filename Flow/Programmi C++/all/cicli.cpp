#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int lung_max = 10;
    char vet[10];
    int vet1[5];
    char vet2[30];

    vet1[0] = 10;
    vet1[1] = 20;
    vet1[2] = 30;
    vet1[3] = 40;
    vet1[4] = 50;

    int lunghezza_del_vettore =  sizeof(vet);
	for ( int i = 0; i < lunghezza_del_vettore ; i++)
    {
        vet[i] = 'c';
    }

    int contatore = 0;
    while (contatore < lunghezza_del_vettore)
    {
        printf("l'elemento e' : %c \n", vet[contatore]);
        contatore++;
    }

    int lungh_vet1 = sizeof(vet1);
    printf("Vet1 e' lungo : %d \n", lungh_vet1);
    for ( int i = 0; i < 5; i++)
    {
        printf("l'elemento e' : %d \n",vet1[i]);

    }
    
	return 0;
}