// Esercizio 2
// Carichi gli elementi di un vettore e crei un secondo vettore in cui verranno inseriti i valori 
// dispari del primo vettore e visualizzi il risultato
#include <iostream>
#define N 3

int main()
{
    int i;
    int vettore1[N];
    int vettore2[N];

    for (i = 0; i < N; i++)
    {

        printf("\n inserire il numero nel vettore --> ");
        scanf("%d", &vettore1[i]);
    }

    int indice_vettoe_dispari = 0;
    for (i = 0; i < N; i++)
    {
        if (vettore1[i] % 2 != 0)
        {
            // printf("\n Inserisco il numero dispari: %d", vettore1[i]);

            vettore2[indice_vettoe_dispari] = vettore1[i];

            indice_vettoe_dispari++;
        }
    }

    for ( i = 0; i < indice_vettoe_dispari; i++)
    {
        printf("\n numero dispari = %d", vettore2[i]);
    }
    
}