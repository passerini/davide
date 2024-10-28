
// Calcolare la divisione di due numeri interi mediante la sottrazione.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 10/10/24
 */

import java.util.Scanner;

public class DivisioneSottrazione {

    public static void main(String[] args) {

        int n1;
        int n2;
        int q = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il primo numero");
        n1 = input.nextInt();

        System.out.println("inserisci il secondo numero");
        n2 = input.nextInt();

        while (n1 >= n2) {

            n1 = n1 - n2;
            q = q + 1;
        }
        System.out.println("il quoziente e'  " + q);
    }
}
