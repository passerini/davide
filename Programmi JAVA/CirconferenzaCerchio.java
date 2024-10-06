
// calcolare circonferenza e area dato il raggio di una circonferenza

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 26/09/24
 */
import java.util.Scanner;

public class CirconferenzaCerchio {

    public static void main(String[] args) {

        double raggio;
        double area;
        double circonferenza;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci il raggio della circonferenza");
        raggio = input.nextDouble();

        area = 3.14 * (raggio * raggio);

        System.out.println("L'area e'  " + area);

        circonferenza = (3.14 * 2) * raggio;

        System.out.println("La circonferenza e'  " + circonferenza);
        input.close();
    }

}
