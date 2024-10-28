
// // Scrivere un programma che considera come input dieci voti di uno studente 
// espressi in numeri e segnala con un giudizio non numerico se il voto è negativo, 
// sufficiente o positivo. //

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 16/10/24
 */

import java.util.Scanner;

public class Voti10Studente {

    public static void main(String[] args) {

        double voto;

        Scanner input = new Scanner(System.in);
         for (int i = 0; i < 10; i++) {

            System.out.println("inserisci voto");
            voto = input.nextDouble();

            if (voto == 6) {

                System.out.println("Il voto e' sufficiente " + voto);
            
            } else if (voto > 6) {

                System.out.println("Il voto e' positivo " + voto);

            } else {

                System.out.println("Il voto e' negativo " + voto);

            }
        }

    }
}
