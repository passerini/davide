#include <iostream>
#define N 5

int main()
{
    int vet1[N];
    int vet2[N];
    int i, y;

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
        printf(" %d ", vet1[i]);

        for (y = 0; y < N; y++)
        {
            if (vet1[i] == vet2[y])
            {
                printf("\n Il seguente numero e' duplicato : ");
                printf(" %d ", vet2[y]);
            }
        }
    }

    return 0;
}
