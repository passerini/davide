// Scrivi un programma che effettua il calcolo della media dei voti della pagella, 
// inserendoli uno alla volta e chiedendo a ogni inserimento di un numero se i voti da inserire 
//  sono terminati accettando come risposta S oppure N.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 11/11/24
 */

import java.util.*;

public class VotiPagella {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double voto;
        double media;
        int Nvoti = 0;
        double somma = 0;
        char ris = ' ';
        while (ris != 'S') {

            System.out.println("Inserisci i voti: ");
            voto = input.nextInt();

            System.out.println("I voti sono terminati? S si, N no");
            ris = input.next().charAt(0);

            if (voto >= 1 && voto <= 10) {
                somma = somma + voto;
                Nvoti++;

            } else {
                System.out.println("Voto inserito non valido");
            }
        }

        media = somma / Nvoti;

        System.out.println("La media dei voti è: " + media);

    }

}