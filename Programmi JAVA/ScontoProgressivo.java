/* Un negoziante, per incrementare le sue vendite, 
prevede di applicare uno sconto progressivo sull'importo della fattura, 
in base al numero dei pezzi acquistati. Se il cliente compra 1 pezzo viene 
applicato il 15% di sconto, il 20% per 2 pezzi, il 30% per 3; in tutti gli altri casi 
lo sconto è del 40%. Visualizzare lo sconto applicato e l'importo effettivo che il cliente 
deve pagare.
  
  
   Autore : Passerini Davide
   Classe : 4ID
   Data : 03/10/24

 */

import java.util.Scanner;

public class ScontoProgressivo {

    public static void main(String[] args) {

        int pezzi;
        double PrezzoIniziale;
        double PrezzoFinale;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci prezzo iniziale");
        PrezzoIniziale = input.nextDouble();

        System.out.println("Quanti articoli hai scelto di acquistare?");
        pezzi = input.nextInt();

        switch (pezzi) {

            case 1:
                System.out.println("Hai ottenuto il 15% di sconto");
                PrezzoFinale = PrezzoIniziale - (PrezzoIniziale / 100 * 15);
                break;

            case 2:
                System.out.println("Hai ottenuto il 20% di sconto");
                PrezzoFinale = PrezzoIniziale - (PrezzoIniziale / 100 * 20);
                break;

            case 3:
                System.out.println("Hai ottenuto il 30% di sconto");
                PrezzoFinale = PrezzoIniziale - (PrezzoIniziale / 100 * 30);
                break;

            default:
                System.out.println("Hai ottenuto il 40% di sconto");
                PrezzoFinale = PrezzoIniziale - (PrezzoIniziale / 100 * 40);
                break;
        }
        System.out.println("Il prezzo scontato e':  " + PrezzoFinale);
    }

}
