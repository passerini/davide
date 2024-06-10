#include <stdio.h>

int main() {
    int N, num, count = 0;
    
    printf("Quanti numeri? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if (num == 0) {
            count++;
        }
    }
    printf("Ci sono %d numeri nulli.\n", count);
    
    return 0;
}