/* Per effettuare un'operazione promozionale, un negoziante offre ai propri clienti 
   che effettuano acquisti per un ammontare inferiore a 100 euro uno sconto del 5%, 
   altrimenti del 10%.
  
  
   Autore : Passerini Davide
   Classe : 4ID
   Data : 30/09/24

 */

import java.util.Scanner;

public class Sconto {

    public static void main(String[] args) {

        float prezzo;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci la cifra totale dei tuoi acquisti");
        prezzo = input.nextFloat();

        if (prezzo < 100) {
            prezzo = prezzo - (prezzo * 5 / 100);
        } else {
            prezzo = prezzo - (prezzo * 10 / 100);
        }

        System.out.println("il prezzo finale scontato e'  " + prezzo);

    }

}
