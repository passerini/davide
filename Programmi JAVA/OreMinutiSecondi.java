/* dopo aver acquistato l'ora del giorno espressa come numero di secondi, 
   converta il valore dai secondi al formato ore:minuti:secondi

 ore = orario / 3600
 minuti = (orario % 3600) / 60
 secondi = orario % 60


  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 30/09/24
 */

import java.util.Scanner;

public class OreMinutiSecondi {

    public static void main(String[] args) {

        int OrarioIniziale;
        int ore;
        int minuti;
        int secondi;
        int OrarioFinale;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci l'orario in secondi");
        OrarioIniziale = input.nextInt();

        ore = OrarioIniziale / 3600;

        minuti = (OrarioIniziale % 3600) / 60;

        secondi = OrarioIniziale % 60;

        System.out.println("l'orario finale e':  " + ore + " ora :" + minuti + " minuti:" + secondi + " secondi");

    }

}
