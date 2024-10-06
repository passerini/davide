
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 29/09/24
 */

import java.util.Scanner;

public class SommaReali {

    public static void main(String[] args) {

        double primoNumero;
        double secondoNumero;
        double somma;
        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il primo numero");
        primoNumero = input.nextDouble();

        System.out.println("inserisci il secondo numero");
        secondoNumero = input.nextDouble();

        somma = primoNumero + secondoNumero;
        System.out.println("La somma  " + somma);

    }

}
