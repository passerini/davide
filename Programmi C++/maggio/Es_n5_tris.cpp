
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inizializza_matrice(char matrice[3][3]){
	int i, j;
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 3; ++j){
			matrice[i][j] = '-';
		}
	}
}

void disegna_matrice(char matrice[3][3]){
	printf("   _________\n");
	int i;
	for (i = 0; i < 3; ++i){
		printf("  |");
		for (int j = 0; j < 3; j++)
		{
			printf(" %c ", matrice[i][j]);
		}
		printf("|\n");
	}
	printf("   ---------\n");
}

char controlla_chi_tocca(char giocatore){
	if (giocatore == 'X'){
		return 'O';
	} else {
		return 'X';
	}
}

void inserisci_segno(char matrice[3][3], char giocatore){
	int riga, colonna;

	printf("Inserisci coordinate per %c: ", giocatore);
	scanf("%d %d", &riga, &colonna);

	while (matrice[riga][colonna] != '-'){
		printf("non puoi inserire un segno in questa posizione\n");
		printf("Riprova con altre coordinate per %c: ", giocatore);
		scanf("%d %d", &riga, &colonna);
	}
	matrice[riga][colonna] = giocatore;	
}

bool verifica(char matrice[3][3], char giocatore){
	
	char vincitore = ' ';
	if (matrice[0][0] == giocatore && matrice[1][1] == giocatore && matrice[2][2] == giocatore){       // TRIS IN DIAGONALE
		vincitore = giocatore;
	} else if(matrice[0][2] == giocatore && matrice[1][1] == giocatore && matrice[2][0] == giocatore){ // TRIS IN DIAGONALE OPPOSTA
		vincitore = giocatore;
	} else if(matrice[0][0] == giocatore && matrice[0][1] == giocatore && matrice[0][2] == giocatore){ // TRIS NELLA RIGA 0
		vincitore = giocatore;
	} else if(matrice[1][0] == giocatore && matrice[1][1] == giocatore && matrice[1][2] == giocatore){ // TRIS NELLA RIGA 1
		vincitore = giocatore;
	} else if(matrice[2][0] == giocatore && matrice[2][1] == giocatore && matrice[2][2] == giocatore){ // TRIS NELLA RIGA 2
		vincitore = giocatore;
	} else if(matrice[0][0] == giocatore && matrice[1][0] == giocatore && matrice[2][0] == giocatore){ // TRIS NELLA COLONNA 0
		vincitore = giocatore;
	} else if(matrice[0][1] == giocatore && matrice[1][1] == giocatore && matrice[2][1] == giocatore){ // TRIS NELLA COLONNA 1
		vincitore = giocatore;
	} else if(matrice[0][2] == giocatore && matrice[1][2] == giocatore && matrice[2][2] == giocatore){ // TRIS NELLA COLONNA 2
		vincitore = giocatore;
	}

	if (vincitore != ' '){
		printf("\n\nVince Giocatore %c \n", giocatore);
		return false; // ritorna false per far terminare il gioco
	} else {
		return true; // ritorna true per far continuare il gioco
	}
}

int main(){
	char matrice[3][3];
	char giocatore = 'X';
	int celleinserite = 0;

	printf("\n GIOCO DEL TRIS \n");
	inizializza_matrice(matrice); //resetta la matrice e inserisce "-" in ogni casella del tris
	

	bool giocoincorso = true; //per mantenere il gioco attivo
	while (giocoincorso && celleinserite < 9){

		disegna_matrice(matrice); // funzione che disegna la matrice nel terminale

		giocatore = controlla_chi_tocca(giocatore); // funzione che controlla chi tocca giocare

		inserisci_segno(matrice,giocatore); //funzione che inserisce nella matrice la giocata

		giocoincorso = verifica(matrice , giocatore); // funzione che controlla chi tocca a giocare

		celleinserite++;
	}

	printf("\n\nIL GIOCO E' TERMINATO \n\n");
	
	return 0;
}