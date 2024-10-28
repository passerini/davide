
// 

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 10/10/24
 */

import java.util.Scanner;

public class Equazione {

    public static void main(String[] args) {

        double a;
        double b;
        double c;
        double delta = 0;
        double x, x1, x2;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il primo numero");
        a = input.nextDouble();

        System.out.println("inserisci il secondo numero");
        b = input.nextDouble();

        System.out.println("inserisci il terzo numero");
        c = input.nextDouble();

        if (a == 0) {

            x = -(c / b);

        } else {

            delta = b * b - 4 * (a * c);
        }

        if (delta != 0) {

            System.out.println("Non ammette numeri reali...");

        } else {

            x1 = (-b - Math.sqrt(delta)) / 2 * a;

            x2 = (-b + Math.sqrt(delta)) / 2 * a;


            System.out.println("x1 e':  " + x1);

            System.out.println("x2 e':  " + x2);
        }

       
    }
}
