#include <stdio.h>
#include <string.h>

void elaboraStringa(char* testo, char* risultato, int lunghezza_max) {
    int n = strlen(testo);
    int caratteri_presenti[256] = { 0 }; // array per tener traccia dei caratteri gi� presenti

    int j = 0;
    for (int i = 0; i < n && j < lunghezza_max; i++) {
        if (caratteri_presenti[(int)testo[i]] == 0) {
            caratteri_presenti[(int)testo[i]] = 1;
            risultato[j] = testo[i];
            j++;
        }
    }
    risultato[j] = '\0'; // aggiunge il terminatore di stringa

}

int main() {
    char testo[256];
    char risultato[256];
    int lunghezza_max = 20;
    gets(testo);
    elaboraStringa(testo, risultato, lunghezza_max);

    printf("Stringa elaborata: %s\n", risultato);

    return 0;
}