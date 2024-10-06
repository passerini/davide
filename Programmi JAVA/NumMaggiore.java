
// DATI TRE NUMERI INTERI, INDIVIDUARE IL MAGGIORE.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 03/10/24
 */

import java.util.Scanner;

public class NumMaggiore {

    public static void main(String[] args) {

        int numero1;
        int numero2;
        int numero3;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci primo numero");
        numero1 = input.nextInt();

        System.out.println("inserisci secondo numero");
        numero2 = input.nextInt();

        System.out.println("inserisci terzo numero");
        numero3 = input.nextInt();

        if (numero1 > numero2 && numero1 > numero3) {

            System.out.println(" il numero maggiore e'  " + numero1);

        } else {

            if (numero2 > numero3) {

                System.out.println(" il numero maggiore e'  " + numero2);
            } else {

                System.out.println(" il numero maggiore e'  " + numero3);
            }

        }

    }

}
