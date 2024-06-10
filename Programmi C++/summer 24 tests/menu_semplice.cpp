#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struttura per una voce del menu
typedef struct {
    char label[50];
    void (*function)();
} MenuItem;

// Funzioni per le opzioni
void opzione1();
void opzione2();
void opzione3();
void opzione4();

// Definizione delle funzioni per le opzioni
void opzione1() {
    printf("Hai scelto l'opzione 1.\n");
}

void opzione2() {
    printf("Hai scelto l'opzione 2.\n");
}

void opzione3() {
    printf("Hai scelto l'opzione 3.\n");
}

void opzione4() {
    printf("Hai scelto l'opzione 4.\n");
}

int main() {
    // Definizione delle voci del menu
    MenuItem menu[] = {
        {"Menu scelta 1", opzione1},
        {"Menu scelta 2", opzione2},
        {"Menu scelta 3", opzione3},
        {"Menu scelta 4", opzione4}
    };
    int num_options = sizeof(menu) / sizeof(menu[0]);

    // Stampa del menu
    printf("\nMenu:\n");
    for (int i = 0; i < num_options; i++) {
        printf("%d. %s\n", i + 1, menu[i].label);
    }
    printf("%d. Esci\n", num_options + 1);

    // Lettura della scelta dell'utente
    int scelta;
    printf("Scegli un'opzione: ");
    scanf("%d", &scelta);

    // Esecuzione della funzione corrispondente
    if (scelta >= 1 && scelta <= num_options) {
        menu[scelta - 1].function();
    } else if (scelta == num_options + 1) {
        printf("Uscita dall'applicazione.\n");
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}
