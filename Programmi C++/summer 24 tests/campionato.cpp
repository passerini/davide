#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SQUADRE 4
#define PARTITE_PER_GIORNATA 2
#define GIORNATE (NUM_SQUADRE - 1) * 2

typedef struct {
    char nome[20];
    int punti;
    int goalFatti;
    int goalSubiti;
} Squadra;

void generaRisultato(Squadra *s1, Squadra *s2) {
    int goalS1 = rand() % 5; // Genera gol casuali per la squadra 1
    int goalS2 = rand() % 5; // Genera gol casuali per la squadra 2

    s1->goalFatti += goalS1;
    s1->goalSubiti += goalS2;
    s2->goalFatti += goalS2;
    s2->goalSubiti += goalS1;

    if (goalS1 > goalS2) {
        s1->punti += 3; // Vittoria per s1
    } else if (goalS1 < goalS2) {
        s2->punti += 3; // Vittoria per s2
    } else {
        s1->punti += 1; // Pareggio
        s2->punti += 1; // Pareggio
    }
}

void stampaClassifica(Squadra squadre[]) {
    printf("Classifica:\n");
    for (int i = 0; i < NUM_SQUADRE; i++) {
        printf("%s: %d punti, Gol Fatti: %d, Gol Subiti: %d\n", squadre[i].nome, squadre[i].punti, squadre[i].goalFatti, squadre[i].goalSubiti);
    }
}

int main() {
    srand(time(NULL));

    Squadra squadre[NUM_SQUADRE] = {
        {"Squadra A", 0, 0, 0},
        {"Squadra B", 0, 0, 0},
        {"Squadra C", 0, 0, 0},
        {"Squadra D", 0, 0, 0}
    };

    // Calendario delle partite (indici delle squadre)
    int calendario[GIORNATE][PARTITE_PER_GIORNATA][2] = {
        {{0, 1}, {2, 3}}, // Giornata 1
        {{0, 2}, {1, 3}}, // Giornata 2
        {{0, 3}, {1, 2}}, // Giornata 3
        {{1, 0}, {3, 2}}, // Giornata 4
        {{2, 0}, {3, 1}}, // Giornata 5
        {{3, 0}, {2, 1}}  // Giornata 6
    };

    // Simulazione delle partite
    for (int i = 0; i < GIORNATE; i++) {
        printf("Giornata %d:\n", i + 1);
        for (int j = 0; j < PARTITE_PER_GIORNATA; j++) {
            int squadra1 = calendario[i][j][0];
            int squadra2 = calendario[i][j][1];
            generaRisultato(&squadre[squadra1], &squadre[squadra2]);
            printf("%s vs %s\n", squadre[squadra1].nome, squadre[squadra2].nome);
        }
        printf("\n");
    }

    // Stampa della classifica finale
    stampaClassifica(squadre);

    return 0;
}