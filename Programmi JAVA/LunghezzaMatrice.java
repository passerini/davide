// DEFINIRE IL NUMERO MASSIMO DI RIGHE E DI COLONNE, CARICARE GLI ELEMENTI INTERI 
// DA 1 A 1000 ALL'INTERNO DELLA MATRICE MEDIANTE IL GENERATORE DEI NUMERI CASUALI 
//   E SUCCESSIVAMENTE VISUALIZZARE GLI STESSI.

// /*  Autore : Passerini Davide
//  *  Classe : 4ID
//  *  Data : 24/10/24
//  */

import java.util.*;

public class LunghezzaMatrice {

    public static void main(String[] args) {

        int r,c;

        Random random = new Random();
        Scanner input = new Scanner(System.in);

        System.out.println("Inserisci quante righe vuoi");
        r = input.nextInt();

        System.out.println("Inserisci quante colonne vuoi");
        c = input.nextInt();

        int matrice[][] = new int[r][c];

        for (int i = 0; i < r; i++) {

            for (int j = 0; j < c; j++) {

                // inserimento valori randomici

                matrice[i][j] = random.nextInt(1000)+1;  
            }
        }

        for (int i = 0; i < r; i++) {

            for (int j = 0; j < c; j++) {

                System.out.print(matrice[i][j] + " ");

            }
            System.out.println("\t");
        }
    }
}
