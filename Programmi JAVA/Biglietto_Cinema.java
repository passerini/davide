
/*  
Il prezzo del biglietto di un cinema è determinato dall'età degli spettatori:
 per i bambini al di sotto dei 10 anni e gli anziani con più di 80 anni l'ingresso 
 è omaggio. Il programma, in base all'età inserita, indica se lo spettatore 
 ha diritto o meno all'ingresso gratuito.

Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 07/10/24
 */

import java.util.Scanner;

public class Biglietto_Cinema {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int eta;

        System.out.println("inserisci l'eta della persona");
        eta = input.nextInt();

        if (eta < 10 || eta > 80) {

            System.out.println("Entrata GRATIS");

        } else {

            System.out.println("Entrata a PAGAMENTO");
        }
    }

}
