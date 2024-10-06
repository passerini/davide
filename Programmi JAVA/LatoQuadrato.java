
/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 25/09/24
 */

import java.util.Scanner;

public class LatoQuadrato {

    public static void main(String[] args) {

        float lato;
        float area;
        float perimetro;
        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il lato del quadrato");
        lato = input.nextFloat();

        area = lato * lato;
        System.out.println("L'area e'  " + area);

        perimetro = lato * 4;
        System.out.println("Il perimetro e'  " + perimetro);

    }

}
