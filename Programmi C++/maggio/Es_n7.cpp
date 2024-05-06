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

void inserisci_parametri(){
    //  - il costo del materiale
    //  - il numero di giorni di lavoro previsti 
    //  - il numero di operai da dedicarvi
    // Una giornata di un operaio costa 120 Euro. 


};

void stampa_preventivo(){
    char stringa_nome[30] = "Impresa Massacan";
    char stringa_indirizzo[80] = "via Roma 121";
    char stringa_citta[30] = "Salerano sul Lambro (LO)";

    char prodotto[] = "Computer";
    float prezzo_unitario = 999.99;
    int quantita = 3;

    float totale = prezzo_unitario * quantita;


   // Stampa del preventivo con layout
    printf("Preventivo:\n\n");
    printf("%s\n", stringa_nome);
    printf("%s\n", stringa_indirizzo);
    printf("%s\n", stringa_citta);
    printf("\n\n-------------------------------------------------------------------------------\n");
    printf("Costo materiali:                                            $%.2f\n", prezzo_unitario);
    printf("Mano d'opera 3 operai per 10 giorni                         $%.2f\n", prezzo_unitario);
    printf("                                                         --------------\n");
    printf("                                            SubTotale       $%.2f\n\n\n", prezzo_unitario);
    printf("Assicurazione (4%%)                                          $%.2f\n", prezzo_unitario);
    printf("                                                         --------------\n");
    printf("                                            SubTotale       $%.2f\n\n\n", prezzo_unitario);
    printf("IVA (20%%)                                                   $%.2f\n", prezzo_unitario);
    printf("                                                         --------------\n");
    printf("Totale:                                                     $%.2f\n", totale);
};

int main(){


    int costo_materiali = 1500;

	printf("\nPREVENTIVO LAVORI \n\n");

    inserisci_parametri();
    stampa_preventivo();
 

	return 0;
}