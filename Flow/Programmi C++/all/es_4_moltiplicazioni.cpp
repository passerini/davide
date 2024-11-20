// Esercizio 4
// Effettui la moltiplicazione di due numeri per somme successive

#include <iostream>

int main() {
 
	int risultato=0, N1, N2;

	printf("\n dichiara il primo numero --> ");
 	scanf("%d", &N1);
	  
	printf("\n dichiara il secondo numero --> ");
	scanf("%d", &N2);

 
	for ( int i = 0; i < N2;  i++){

		risultato += N1;
	}

	printf("\n il risultato della moltiplicazione è: %d ", risultato);
	
}
