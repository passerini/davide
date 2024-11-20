// Esercizio 3
// Carichi gli elementi di due vettori uno alla volta, crei un terzo vettore in cui verranno inseriti la moltiplicazione degli elementi nella stessa
// posizione dei due vettori e visualizzi il risultato esempio:
// V1   33: 24; 3;
// v2    10; 12, 1
// V3   -330; 288; 3
#include <stdio.h>
#define N 3

int main()
{

    int vet1[N];
    int vet2[N];
    int vet3[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("\ninserire valore del primo vettore ");
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("\ninserire valore del secondo vettore ");
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < N; i++)
    {
        vet3[i] = vet1[i] * vet2[i];
        printf("\nil numero caricato nel terzo vettore e' %d", vet3[i]);
    }

    printf("\n Vettore 1: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", vet1[i], " , ");
        printf(" ");
    }

    printf("\n Vettore 2: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", vet2[i], " , ");
        printf(" ");
    }

    printf("\n Vettore 3: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", vet3[i], " , ");
        printf(" ");
    }

    return 0;
}
