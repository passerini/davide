#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inizializza_tabella() {}
void disegna_tabella() {}

int main()
{
    char trattino = '-';
    char tabella[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabella[i][j] = '-';
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", tabella[i][j]);
        }
        printf("\n");
    }

    return 0;
}
