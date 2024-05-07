// Somma di tempi: Mostra a video, nel formato mostrato nell'esempio seguente, la somma di 
// due ore espresse in ore, minuti e secondi.
// Esempio
// h m s
// 22 14 30 +
// 3 50 27 =
// -------
// 2 04 57
// Il programma deve tener conto che se si superano le ore 23:59:59 
// si deve ripartire da 0:00:00

#include <stdio.h>
#include <stdlib.h>


int main(){
    char h = 'h';
    char m = 'm';
    char s = 's';

    int ore_a = 2;
    int min_a = 59;
    int sec_a = 59;

    int ore_b = 23;
    int min_b = 35;
    int sec_b = 15;

    int riporto_minuti= 0;
    int riporto_ore = 0;

    //calcolo i secondi
    int risultato_secondi=0;
    risultato_secondi = sec_a + sec_b;
    if (risultato_secondi > 59)
    {
        risultato_secondi = risultato_secondi - 60;
        riporto_minuti = 1;
    }

    //calcolo i minuti e considero riporto dai secondi
    int risultato_minuti = 0;
    risultato_minuti = min_a + min_b + riporto_minuti;
    if (risultato_minuti > 59)
    {
        risultato_minuti = risultato_minuti - 60;
        riporto_ore = 1;
    }   

    //calcolo le ore e considero riporto dai minuti
    int risultato_ore = 0;
    risultato_ore = ore_a + ore_b + riporto_ore;
    if (risultato_ore > 23)
    {
        risultato_ore = risultato_ore - 24;
    }   

	printf("\nSOMMA ORE \n");
    
    printf(" %c  %c  %c", h,m,s);
    printf("\n");
    printf("%d  %d  %d +",ore_a,min_a,sec_a);
    printf("\n");
    printf("%d  %d  %d =",ore_b,min_b,sec_b);
    printf("\n");
    printf("-----------");
    printf("\n");
    printf("%d  %d  %d",risultato_ore, risultato_minuti, risultato_secondi);

	return 0;
}