
// DATI TRE NUMERI INTERI, ORDINARLI IN MODO CRESCENTE

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 03/10/24
 */

import java.util.Scanner;

public class Crescente3Num {

    public static void main(String[] args) {

        int numero1;
        int numero2;
        int numero3;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci primo numero");
        numero1 = input.nextInt();

        System.out.println("inserisci secondo numero");
        numero2 = input.nextInt();

        System.out.println("inserisci terzo numero");
        numero3 = input.nextInt();

        if (numero1 < numero2 && numero1 < numero3) {

            if (numero2 < numero3) {

                System.out.println(" il più piccolo e' " + numero1 + " poi " + numero2 + " e poi " + numero3);

            } else {

                System.out.println(" il più piccolo e' " + numero1 + " poi " + numero3 + " e poi " + numero2);

            }
        } else {

            if (numero2 > numero3 && numero2 > numero1) {

                if (numero3 < numero1) {

                    System.out.println(" il più piccolo e' " + numero3 + " poi " + numero1 + " e poi " + numero2);

                } else {

                    System.out.println(" il più piccolo e' " + numero1 + " poi " + numero3 + " e poi " + numero2);

                }

            } else {

                if (numero1 > numero2) {

                    System.out.println(" il più piccolo e' " + numero2 + " poi " + numero1 + " e poi " + numero3);

                } else {

                    System.out.println(" il più piccolo e' " + numero1 + " poi " + numero2 + " e poi " + numero3);

                }
            }
        }
    }
}
