#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inizializza_tabella(char tabella[3][3]){

    for (int riga = 0; riga < 3; riga++){

        for (int colonna = 0; colonna < 3; colonna++){
              tabella[riga][colonna]= '-';
        }
        
    }

}

void disegna_tabella(char tabella[3][3]){
	
    for (int riga = 0; riga < 3; riga++){
        printf("\n");
        for (int colonna = 0; colonna < 3; colonna++){
            printf("%c \n",tabella[riga][colonna]);
        }
    }
}

int main()
{
    int contatore = 0;
    char giocatore;

    char tabella[3][3];

    int riga, colonna;
    giocatore = 'X';
    while (contatore < 9)
    {
        inizializza_tabella(tabella);
        disegna_tabella(tabella);
        
        printf("Giocatore %c inserisci le coordinate:", giocatore);
        scanf("%d %d", &riga, &colonna);

        contatore++;



    }

    return 0;
}
