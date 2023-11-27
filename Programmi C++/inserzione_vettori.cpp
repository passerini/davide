#include <iostream>

#define N 5

int main()
{

    int vettore1[N];
    int vettore2[N];
    int vettore_doppi[N];

    int i, y;
    int indice_vettore_numeri_doppi = 0;

    // chiedo i numeri dei due vettori
    for (i = 0; i < N; i++)
    {
        printf("inserisci elemento del primo vettore \n");
        scanf("%d", &vettore1[i]);

        printf("inserisci elemento del secondo vettore \n");
        scanf("%d", &vettore2[i]);
    }

    // controllo se ci sono numeri doppi
    for (i = 0; i < N; i++)
    {
        // estraggo il primo numero da controllare (lo estraggo dal primo vettore vettore1)
        int numero_da_controllare = vettore1[i];

        for (y = 0; y < N; y++)
        {
            // inizializzo la variabile booleana a FALSE
            if (numero_da_controllare == vettore2[y] )
            {
                // HO TROVATO UN NUMERO DOPPIO!!
                vettore_doppi[indice_vettore_numeri_doppi] = numero_da_controllare;
                printf("\n numero doppio trovato! %d", numero_da_controllare);

                indice_vettore_numeri_doppi++;
            }
        }

    }

    return 0;
}
