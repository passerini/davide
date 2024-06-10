// Esercizio 1
// Carichi gli elementi di un vettore e li visualizzi in ordine inverso (dalla posizione dell’ultimo al primo elemento)
#include <stdio.h>
#define N 3
 
int main()
{
    int vet1[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("\ninserire valore del vettore ");
        scanf("%d", &vet1[i]);
    }

    for (i = N-1; i >= 0; i--)
    {
        printf("\n numero = %d", vet1[i]);
    }

    return 0;
}
