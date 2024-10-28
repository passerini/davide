
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 21/10/24
 */

import java.util.Scanner;

public class Matrice {

    public static void main(String[] args) {

        int matrice[][] = new int [3][4];

        Scanner input = new Scanner(System.in);

        for (int r = 0; r < 4; r++) {

            for (int c = 0; c < 4; c++) {

                System.out.println("inserisci l'elemento della matrice e' " + r + c + ": ");

                // inserimento valori

                matrice[r][c] = input.nextInt();

            }

        }

        for (int r = 0; r < 4; r++) {              //visualizzazione

            for (int c = 0; c < 4; c++) {

             System.out.println("il valore " +r +c+" del matrice e': "+ matrice[r][c]);

                


            }

        }
 

    }

}
