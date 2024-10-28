
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 21/10/24
 */

import java.util.*;

public class VettoreCasuale {

    public static void main(String[] args) {

        int lunghezza = 5;
        int vettore[] = new int[lunghezza]; // Il vettore contiene 5 numeri

        Random random = new Random();

        for (int i = 0; i < lunghezza; i++) {

            vettore[i] = random.nextInt(100); // Numeri da 0 a 99
        }

        System.out.println("I numeri del vettore sono: ");

        for (int i = 0; i < lunghezza; i++) {

            System.out.print(vettore[i] + " ");

        }

        System.out.println("\n");

    }

}
