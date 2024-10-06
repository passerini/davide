// Scrivere un programma che legge da tastiera l'età di tre persone e calcola l'età media
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 30/09/24
 */

import java.util.Scanner;

public class EtaMedia {

    public static void main(String[] args) {

        float eta1;
        float eta2;
        float eta3;
        float media;
        
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("inserisci l'eta della prima persona");
            eta1 = input.nextFloat();

            System.out.println("inserisci l'eta della seconda persona");
            eta2 = input.nextFloat();

            System.out.println("inserisci l'eta della terza persona");
            eta3 = input.nextFloat();
        }

        media = (eta1 + eta2 + eta3) / 3;

        System.out.println("la media della eta totale e':  " + media);

    }

}
