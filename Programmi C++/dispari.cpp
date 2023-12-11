#include <iostream>
#define N 10

int main()
{
    int contatore,conta0, contapari, contadispari;
    int vet[N];

   
    conta0 = 0;
    contapari = 0;
    contadispari = 0;
    
    for (contatore = 0; contatore < N; contatore++) {
      
        printf("inserire il vettore %d ", contatore);
        scanf("%d", &vet[contatore]);

        if (vet[contatore] == 0) {

            conta0++;

        }
        if (vet[contatore] % 2 == 0) {
            contapari++;
        }
        else {
            contadispari++;
        }
    }
 

    printf("gli elementi pari sono %d \n", contapari);
    printf("gli elementi dispari sono %d \n", contadispari);
    printf("gli elementi uguali a 0 sono %d \n", conta0);

    return 0;
}