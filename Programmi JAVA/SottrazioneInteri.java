
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 29/09/24
 */

import java.util.Scanner;

public class SottrazioneInteri {

    public static void main(String[] args) {

        int primoNumero;
        int secondoNumero;
        int risultato;
        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il primo numero");
        primoNumero = input.nextInt();

        System.out.println("inserisci il secondo numero");
        secondoNumero = input.nextInt();

        risultato = primoNumero - secondoNumero;
        System.out.println("Il risultato e'  " + risultato);

    }

}
