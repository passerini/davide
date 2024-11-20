#include <stdio.h>
#include <string.h>

int main() {
    // Dimensione del vettore
    int dimensione = 5;
    
    // Vettore di stringhe
    char vettore[dimensione][100];
    
    // Ciclo for per caricare le stringhe nel vettore
    for (int i = 0; i < dimensione; i++) {
        printf("Inserisci una stringa: ");
        scanf("%s", vettore[i]);
    }
    
    // Stampa del vettore
    for (int i = 0; i < dimensione; i++) {
        printf("%s\n", vettore[i]);
    }
    
    return 0;
}
