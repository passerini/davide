
import java.util.Scanner;

public class Calcolatrice {
    public static void main(String[] args) {

        double n1, n2;
        int scelta;

        Scanner input = new Scanner(System.in);

        System.out.println("Inserisci primo numero");
        n1 = input.nextDouble();

        System.out.println("Inserisci secondo numero");
        n2 = input.nextDouble();

        Calcoli calcoli = new Calcoli(n1, n2);

        System.out.println("Scegliere l'operazione da scegliere con questi due numeri: ");
        System.out.println("MENU : 0 = addizione    1 = moltiplicazione   2 = sottrazione    3 = divisione");
        scelta = input.nextInt();

        switch (scelta) {

            case 0:
                System.out.println("Hai scelto la somma. il risultato finale e' = " + calcoli.getSomma());

                break;

            case 1:
                System.out.println(
                        "Hai scelto la moltiplicazione. il risultato finale e' = " + calcoli.getMoltiplicazione());

                break;

            case 2:
                System.out
                        .println("Hai scelto la sottrazione. il risultato finale e' = " + calcoli.getMoltiplicazione());

                break;

            case 3:
                System.out.println("Hai scelto la divisione. il risultato finale e' = " + calcoli.getDivisione());

                break;

            default:
                System.out.println("seleziona un'altra scelta");

                break;

        }

    }

}
