#include <iostream>
#define Ntot 10
#define N 5

int main() {

    int vet1[N];
    int vet2[N];
    int vet_totale[Ntot];
    
    int i;

    for ( i = 0; i < N; i++)
    {
        int numero1;
        printf("inserisci elemento del primo vettore \n");
        scanf("%d", &numero1);

        vet1[i] = numero1;
        vet_totale[i] = numero1;
        
        int numero2;
        printf("inserisci elemento del secondo vettore \n");
        scanf("%d", &numero2);

        vet2[i] = numero2;
        vet_totale[i+N] = numero2;
    
    }
    
    for (i = 0; i < Ntot; i++)
    {

        printf("\n il numero e' %d", vet_totale[i]);

    }
    
    return 0;
}
