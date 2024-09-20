import java.util.Scanner;

public class SommaNumeri {
    public static void main(String[] args) {

        Scanner input = null;
        // Crea un'istanza di Scanner per leggere l'input da tastiera
        try {
            input = new Scanner(System.in);
        } catch (Exception e) {

        }

        // Chiede il primo numero reale
        System.out.print("Inserisci il primo numero reale: ");
        double numero1 = input.nextDouble();

        // Chiede il secondo numero reale
        System.out.print("Inserisci il secondo numero reale: ");
        double numero2 = input.nextDouble();

        // Calcola la somma dei due numeri
        double somma = numero1 + numero2;

        // Visualizza la somma
        System.out.println("La somma dei due numeri è: " + somma);

        // Chiude lo scanner
        input.close();
    }
}
