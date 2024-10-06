
// calcolare circonferenza e area dato il raggio di una circonferenza

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 26/09/24
 */

import java.util.Scanner;

public class NumCrescente {

    public static void main(String[] args) {

        int numero1;
        int numero2;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci primo numero");
        numero1 = input.nextInt();

        System.out.println("inserisci secondo numero");
        numero2 = input.nextInt();

        if (numero1 < numero2) {

            System.out.println(" prima " + numero1 + "e poi " + numero2);

        } else {

            System.out.println(numero2 + " , " + numero1);

        }

    }

}
