// calcolare area e perimetro data la base e l'altezza di un rettangolo
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 25/09/24
 */

import java.util.Scanner;

public class LatoRettangolo {

    public static void main(String[] args) {

        float base;
        float altezza;
        float area;
        float perimetro;
        Scanner input = new Scanner(System.in);

        System.out.println("inserisci la base del rettangolo");
        base = input.nextFloat();

        System.out.println("inserisci l'altezza del rettangolo");
        altezza = input.nextFloat();

        area = base * altezza;
        System.out.println("L'area e'  " + area);

        perimetro = (base * 2) + (altezza * 2);
        System.out.println("Il perimetro e'  " + perimetro);

    }

}
