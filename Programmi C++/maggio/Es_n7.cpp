// Preventivo: 
// Scrivere un programma che consenta ad una impresa edile di fare dei preventivi di spesa sui lavori. 
// I dati che devono essere forniti al programma sono :
//  - il costo del materiale
//  - il numero di giorni di lavoro previsti 
//  - il numero di operai da dedicarvi
// Una giornata di un operaio costa 120 Euro. 
// Al totale deve essere aggiunta una quota pari al 4% di assicurazione. 
// Sul totale complessivo deve essere calcolata l'IVA al 20%. 

// Alla fine deve essere visualizzato un prospetto il più possibile simile al seguente:

// Impresa Massacan
// Via Muratori 99
// 16100 Genova

// Preventivo
// Costo materiali                                         1500,00 Euro
// Mano d'opera 3 operai per 10 giorni                     3600,00 Euro
//                                                     --------------------
//                                             SubTotale   5100,00 Euro

// Assicurazione (4%)                                      204,00 Euro
//                                                     -------------------- 
//                                             SubTotale   5304,00 Euro

// IVA (20%)                                               1060,80 Euro
//                                                     --------------------
// Totale                                                  6464,80 Euro

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void stampa_preventivo(float costo_materiale , int numero_operai, int giorni_previsti ){
    char stringa_nome[30] = "Impresa Massacan";
    char stringa_indirizzo[80] = "via Roma 121";
    char stringa_citta[30] = "Salerano sul Lambro (LO)";

    float totale_operai = numero_operai * giorni_previsti * 120;
    float subtotale1 = totale_operai + costo_materiale;
    float assicurazione = subtotale1 * 4 /100;
    float subtotale2 = subtotale1 + assicurazione;
    float iva = subtotale2 * 22 /100;
    float conto_totale = subtotale2 + iva;

    printf("\n\n-------------------------------------------------------------------------------\n");
    printf("Preventivo:\n\n");
    printf("%s\n", stringa_nome);
    printf("%s\n", stringa_indirizzo);
    printf("%s\n", stringa_citta);
    printf("-------------------------\n");
    printf("Costo materiali:                                            $%.2f\n", costo_materiale);
    printf("Mano d'opera %d operai per %d giorni                         $%.2f\n",numero_operai, giorni_previsti,totale_operai);
    printf("                                                         --------------\n");
    printf("                                            SubTotale       $%.2f\n\n\n", subtotale1);
    printf("Assicurazione (4%%)                                          $%.2f\n", assicurazione);
    printf("                                                         --------------\n");
    printf("                                            SubTotale       $%.2f\n\n\n", subtotale2);
    printf("IVA (20%%)                                                   $%.2f\n", iva);
    printf("                                                         --------------\n");
    printf("Totale:                                                     $%.2f\n", conto_totale);
    printf("\n\n-------------------------------------------------------------------------------\n");
};

int main(){
    float costo_materiale;
    int giorni_previsti, numero_operai,costo_operai;

    printf("Inserisci costo materiale: ");
	scanf("%f", &costo_materiale);

    printf("Inserisci quanti giorni di lavoro sono previsti: ");
	scanf("%d", &giorni_previsti);

    printf("Inserisci il numero di operai da dedicarvi: ");
	scanf("%d", &numero_operai);

    stampa_preventivo(costo_materiale , numero_operai, giorni_previsti );

	return 0;
}