// inserire un nuovo Studente se non esiste già
// Alla fine stampare i dati 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Studente {
    char nome[30];
    float voto;
};

int crea_studente(struct Studente studenti_vect[], int position, char il_nome[30],  float il_voto){

    strncpy(studenti_vect[position].nome, il_nome, 30);

    studenti_vect[position].voto = il_voto;
    return position;
}

void stampa_studenti (struct Studente studenti_vect[], int numero_studenti){
    for (int i = 0; i < numero_studenti; i++) {
        printf("Studente %d : Nome = %s, Voto = %.2f\n", 
            i+1,
            studenti_vect[i].nome, 
            studenti_vect[i].voto
        );
    }
}

bool cerca_studente (struct Studente studenti_vect[], int position, char il_nome_da_cercare[30]){
    
    bool trovato = false;
    for (int i = 0; i < position; i++)
    {
        if ( strcmp(studenti_vect[i].nome, il_nome_da_cercare) == 0) {
            printf("Studente  presente nell'array\n");
            trovato = true;
        }
    }
    
    return trovato;
}

void aggiungo_studente(struct Studente studenti_vect[], int position){
    char studente_da_aggiungere[30];
    bool studente_gia_presente = true;
    
    // continuo a chiede di inserire l'utente fino a quando non c'è un utente nuovo
    while (studente_gia_presente)
    {
        printf("inserisci il nome dello studente:\n");
        scanf("%s",studente_da_aggiungere);
        
        studente_gia_presente = cerca_studente(studenti_vect, position, studente_da_aggiungere);
    }

    // chiedo il voto
    float voto = 0;
    while (voto > 10 || voto <= 0)
    {
        printf("inserisci il voto:\n");
        scanf("%f", &voto);

    }
    strncpy(studenti_vect[position].nome, studente_da_aggiungere, 30);
    studenti_vect[position].voto= voto;
    printf("voto inserito\n");
}

int main(){
    // inizializzo vettore di studenti che può contentere al massimo 15 studenti
    struct Studente studenti_vect[15];

    int lunghezza_vettore= 0;
    // Inserisco manualmente alcuni studenti per avere studenti da stampare
    crea_studente(studenti_vect, lunghezza_vettore++, "Maldini", 7.50);
    crea_studente(studenti_vect, lunghezza_vettore++, "Ibra",  4.50);
    crea_studente(studenti_vect, lunghezza_vettore++, "Tonali",  8.50);

    printf("Scegli la voce del Menu:\n\n");
    int risposta= 0;
    while (risposta != 9)
    {
        printf("1 - AGGIUGNO STUDENTE\n");
        printf("2 - STAMPO ELENCO STUDENTI\n");
        printf("9 - CHIUDI APPLICAZIONE\n");
        scanf("%d", &risposta);

        if (risposta== 2)
        {
            stampa_studenti(studenti_vect, lunghezza_vettore);
        } 
        if (risposta== 1)
        {
            aggiungo_studente(studenti_vect, lunghezza_vettore++);
        }       
    }

    return 0;
}