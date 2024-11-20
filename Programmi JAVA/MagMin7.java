// Individua il numero maggiore e minore tra 7 numeri inseriti dall'utente

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 11/11/24
 */

import java.util.*;

public class MagMin7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numeri = new int[7];

        System.out.println("Inserisci 7 numeri:");

        // Raccogliere i numeri inseriti dall'utente
        for (int i = 0; i < 7; i++) {
            System.out.print("Numero " + (i + 1) + ": ");
            numeri[i] = scanner.nextInt();
        }

        // Inizializzare il numero maggiore e minore
        int max = numeri[0];
        int min = numeri[0];

        // Trovare il numero maggiore e minore
        for (int i = 1; i < 7; i++) {
            if (numeri[i] > max) {
                max = numeri[i];
            }
            if (numeri[i] < min) {
                min = numeri[i];
            }
        }

        // Stampare il risultato
        System.out.println("Il numero maggiore è: " + max);
        System.out.println("Il numero minore è: " + min);

    }
}
