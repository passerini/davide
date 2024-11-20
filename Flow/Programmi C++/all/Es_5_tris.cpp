#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inizializza_tabella(char tabella[3][3]) {
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabella[i][j] = '-';
        }
    }

}
void disegna_tabella(char tabella[3][3]) {
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", tabella[i][j]);
        }
        printf("\n");
    }
}
char inserisci(char tabella[3][3],char segno){
    int riga , colonna;
    
    if (segno == 'X'){
        segno = 'O';
    }else{
        segno = 'X';  
    } 
   
    printf("inserisci le coordinate \n");
    scanf("%d %d", &riga, &colonna);
    tabella[riga][colonna] = segno;
    return segno;
}
bool verifica_vittoria(char tabella[3][3],char segno){
    if (tabella[0][2] == segno && tabella[1][1] == segno && tabella[2][0] == segno)
    {
       printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
    else if(tabella[0][0] == segno && tabella[1][1] == segno && tabella[2][2] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[0][0] == segno && tabella[0][1] == segno && tabella[0][2] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[1][0] == segno && tabella[1][1] == segno && tabella[1][2] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[2][0] == segno && tabella[2][1] == segno && tabella[2][2] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[0][0] == segno && tabella[1][0] == segno && tabella[2][0] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[0][1] == segno && tabella[1][1] == segno && tabella[2][1] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
     else if(tabella[0][2] == segno && tabella[1][2] == segno && tabella[2][2] == segno){
        printf("ha vinto il giocatore con il segno: %c", segno);
       return true; 
    }
    
    return false;

}

int main()
{
    char trattino = '-';
    char tabella[3][3];
    char segno = 'X';
    int turno = 0;
    

    inizializza_tabella(tabella); 

    bool vinto = false;
    while (vinto == false && turno < 9)
    {
        disegna_tabella(tabella);
        segno = inserisci(tabella,segno);
        vinto = verifica_vittoria( tabella, segno);
        turno++;
    }
    if (turno==9)
    {
      printf("il gioco e' finito in pareggio \n");
    }
    

    return 0;
}
