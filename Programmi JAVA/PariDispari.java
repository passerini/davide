
// calcolare se il numero inserito è pari o dispari

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 02/10/24
 */

import java.util.Scanner;

public class PariDispari {

    public static void main(String[] args) {

        int numero;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il numero");
        numero = input.nextInt();

        if (numero % 2 == 0) {

            System.out.println(" il numero è pari");
        } else {

            System.out.println(" il numero è dispari");

        }

    }

}
