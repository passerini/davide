#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h" // va installata la libreria


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

void stampaClassifica(Squadra *squadre, int numSquadre) {
    printf("Classifica:\n");
    for (int i = 0; i < numSquadre; i++) {
        printf("%s: %d punti, Gol Fatti: %d, Gol Subiti: %d\n", squadre[i].nome, squadre[i].punti, squadre[i].goalFatti, squadre[i].goalSubiti);
    }
}

Squadra* leggiSquadreDaJSON(const char *filename, int *numSquadre) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file %s\n", filename);
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *data = (char *)malloc(length + 1);
    if (data == NULL) {
        printf("Errore di allocazione della memoria!\n");
        fclose(file);
        return NULL;
    }

    fread(data, 1, length, file);
    fclose(file);
    data[length] = '\0';

    cJSON *json = cJSON_Parse(data);
    free(data);

    if (json == NULL) {
        printf("Errore nel parsing del JSON!\n");
        return NULL;
    }

    cJSON *squadreJson = cJSON_GetObjectItemCaseSensitive(json, "squadre");
    *numSquadre = cJSON_GetArraySize(squadreJson);

    Squadra *squadre = (Squadra *)malloc((*numSquadre) * sizeof(Squadra));
    if (squadre == NULL) {
        printf("Errore di allocazione della memoria!\n");
        cJSON_Delete(json);
        return NULL;
    }

    for (int i = 0; i < *numSquadre; i++) {
        cJSON *squadraJson = cJSON_GetArrayItem(squadreJson, i);
        cJSON *nome = cJSON_GetObjectItemCaseSensitive(squadraJson, "nome");

        strcpy(squadre[i].nome, nome->valuestring);
        squadre[i].punti = 0;
        squadre[i].goalFatti = 0;
        squadre[i].goalSubiti = 0;
    }

    cJSON_Delete(json);
    return squadre;
}

int main() {
    srand(time(NULL));

    int numSquadre;
    Squadra *squadre = leggiSquadreDaJSON("squadre.json", &numSquadre);
    if (squadre == NULL) {
        return 1;
    }

    int numGiornate = (numSquadre - 1) * 2;
    int partitePerGiornata = numSquadre / 2;

    // Simulazione delle partite
    for (int i = 0; i < numGiornate; i++) {
        printf("Giornata %d:\n", i + 1);
        for (int j = 0; j < partitePerGiornata; j++) {
            int squadra1 = (i + j) % numSquadre;
            int squadra2 = (numSquadre - 1 - j + i) % numSquadre;
            if (squadra1 != squadra2) {
                generaRisultato(&squadre[squadra1], &squadre[squadra2]);
                printf("%s vs %s\n", squadre[squadra1].nome, squadre[squadra2].nome);
            }
        }
        printf("\n");
    }

    // Stampa della classifica finale
    stampaClassifica(squadre, numSquadre);

    // Libera la memoria allocata
    free(squadre);

    return 0;
}