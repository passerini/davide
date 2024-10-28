
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 21/10/24
 */

import java.util.Scanner;

public class Vettore {

    public static void main(String[] args) {

        int vettore[] =new int[5];

        Scanner input = new Scanner(System.in);
       

        for (int i = 0; i < 5; i++) {

         System.out.println("inserisci l'elemento del vettore la cui posizione e' +i+ : ");

            // inserimento valori

            vettore[i] = input.nextInt();

        }

        for (int i = 0; i < 5; i++) {

         System.out.println("inserisci l'elemento del vettore la cui posizione e' +i+ : " + vettore[i]);

        }

    }

}
