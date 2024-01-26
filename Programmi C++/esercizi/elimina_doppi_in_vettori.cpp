#include <iostream>
#define N 5

int main()
{
    int vet1[N];
    int vet2[N];
<<<<<<< HEAD:Programmi C++/elimina_doppi_in_vettori.cpp

    int i,y;
=======
    int i, y;
>>>>>>> 4bd6aee7147c4cf1f96ed8628288941970df9f82:Programmi C++/esercizi/elimina_doppi_in_vettori.cpp

    for (i = 0; i < N; i++)
    {
        printf("inserisci elemento del primo vettore \n");
        scanf("%d", &vet1[i]);

        printf("inserisci elemento del secondo vettore \n");
        scanf("%d", &vet2[i]);

    }

    for (i = 0; i < N; i++)
    {
        printf("\n Verifico se e' duplicato il numero: ");
        printf(" %d ", &vet1[i]);

        for (y = 0; y < N; y++)
        {
            if (vet1[i] == vet2[y])
            {
                printf("\n Il seguente numero e' duplicato : ");
                printf(" %d ", &vet2[y]);
            }
        }
    }

    return 0;
}
