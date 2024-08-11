#include <stdio.h>

int main() {
    float km, costo_km, costo_base;
    int costo_prioritario, costo_bagaglio, costo_flessibile;

    printf("Inserisci i km da percorrere: ", 0);
    scanf("%f", &km);
    printf("Inserisci il costo al km: ", 0);
    scanf("%f", &costo_km);

    costo_base = km * costo_km;
    
    printf("Costo base: %.2f Euro\n", costo_base);

    printf("Vuoi l'imbarco prioritario? (1=si, 0=no): ", 0);
    scanf("%d", &costo_prioritario);

    if (costo_prioritario == 1) {
        costo_base = costo_base + 12;
    }

    printf("Vuoi imbarcare un bagaglio in stiva? (1=si, 0=no): ", 0);
    scanf("%d", &costo_bagaglio);

    if (costo_bagaglio == 1) {
        costo_base = costo_base + 20;
    }


    printf("Vuoi un biglietto flessibile? (1=si, 0=no): ", 0);
    scanf("%d", &costo_flessibile);


    if (costo_flessibile == 1) {

        costo_base += costo_base * 0.2;
    }

    float costo_totale = costo_base + costo_prioritario + costo_bagaglio + costo_flessibile;
    printf("Costo totale: %.2f Euro\n", costo_base);
    return 0;
}
