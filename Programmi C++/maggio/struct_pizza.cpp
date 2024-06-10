// Scrivi un programma che data questa struttura:
// struct pizza{
// float prezzo;
// char nome[50]
// char ingredienti[10][30];
// }

// Permetta di inserire 10 pizze con relative informazioni, infine stampa tutte le pizze archiviate assieme alle informazioni associate.

#include <stdio.h>
#include <string.h>

struct pizza
{
    float prezzo;
    char nome[50];
    char ingredienti[10][30];
};

int main()
{

    struct pizza elenco_pizze[10];

    for (int i = 0; i < 10; i++)
    {
        printf("inserisci la %d pizza\n", i + 1);
        gets_s(elenco_pizze[i].nome);
        printf("inserisci il 'prezzo della %d pizza\n", i + 1);
        scanf("%f", elenco_pizze[i].prezzo);

        for (int j = 0; j < 10; j++)
        {
            printf("inserisci il %d ingrediente della %d pizza\n", j + 1, i + 1);
            gets_s(elenco_pizze[i].ingredienti[j]);
        }

        printf("inserisci il 'prezzo della %d pizza\n", i + 1);
        scanf("%f", elenco_pizze[i].prezzo);
    }
}
