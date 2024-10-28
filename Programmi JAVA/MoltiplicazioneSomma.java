
// Calcolare la moltiplicazione di due numeri interi mediante la somma.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 10/10/24
 */

import java.util.Scanner;

public class MoltiplicazioneSomma {

    public static void main(String[] args) {

        int n1;
        int n2;
        int risultato = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il primo numero");
        n1 = input.nextInt();

        System.out.println("inserisci il secondo numero");
        n2 = input.nextInt();

        do {

            risultato = risultato + n1;

            n2--; // decremento n2 continua finchè non diventa 0
       
        } while (n2 > 0);

        System.out.println("risultato e' " + risultato);

    }

}
