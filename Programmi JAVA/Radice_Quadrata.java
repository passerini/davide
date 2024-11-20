
// Calcolare la radice  quadrata di un numero intero

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 04/11/24
 */
import java.util.Scanner;

public class Radice_Quadrata {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Inserisci un numero intero: ");
        int numero = input.nextInt();

        double radice = Math.sqrt(numero);

        int radiceIntera = (int) Math.round(radice);
        
        System.out.println("Arrotondata all'intero più vicino: " + radiceIntera);

    }

}
