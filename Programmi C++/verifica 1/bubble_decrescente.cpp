#include <stdio.h>
#define N 10

int main(){
    int i;
    int j;
    int scambio;

    int vett[N] = {5,3,9,7,8,4,1,2,6,0}; // uso questa solo per evitare di inserire i numeri


    // int vett[N];
    // for (i = 0; i < N; i++)
    // {
    //     printf("\ninserire valore del primo vettore ");
    //     scanf("%d", &vett[i]);
    // }


    // ciclo per tutti i numeri del vettore
    for (int i = 0; i < N; i++){

        // prendo il numero i faccio un confonto con il succesivo
        for (int j = 0; j < (N - i); j++)
            
            // confronto se il successivo è maggiore del numero i
            if (vett[j + 1] > vett[j]){

                // siccome è maggiore li scambio
                int temp = vett[j + 1];
                vett[j + 1] = vett[j];
                vett[j] = temp;
            }
    }

    for(i=0; i<N; i++){
		printf("%d ", vett[i]);
	}

	return 0;

}