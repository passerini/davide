// numeri pari, dispari e nulli.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#define N 10

int main()
{
    int contatore,conta0, contapari, contadispari;
    int vet[N];

   
    conta0 = 0;
    contapari = 0;
    contadispari = 0;
    
    for (contatore = 0; contatore < N; contatore++) {
      
        printf("inserire il vettore %d ", contatore);
        scanf("%d", &vet[contatore]);

        if (vet[contatore] == 0) {

            conta0++;

        }
        if (vet[contatore] % 2 == 0) {
            contapari++;
        }
        else {
            contadispari++;
        }
    }
 

    printf("gli elementi pari sono %d \n", contapari);
    printf("gli elementi dispari sono %d \n", contadispari);
    printf("gli elementi uguali a 0 sono %d \n", conta0);

    return 0;
}


















// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
