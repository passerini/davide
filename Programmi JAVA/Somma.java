import java.util.Scanner;

public class Somma {
    public static void main(String[] args) {
        // Crea un'istanza di Scanner per leggere l'input da tastiera
        Scanner scanner = new Scanner(System.in);

        try {
            // Chiede il primo numero reale
            System.out.print("Inserisci il primo numero reale: ");
            double numero1 = scanner.nextDouble();

            // Chiede il secondo numero reale
            System.out.print("Inserisci il secondo numero reale: ");
            double numero2 = scanner.nextDouble();

            // Calcola la somma dei due numeri
            double somma = numero1 + numero2;

            // Visualizza la somma
            System.out.println("La somma dei due numeri è: " + somma);

        } catch (Exception e) {
            System.out.println("Errore: Inserisci un numero valido.");
        } finally {
            // Chiude lo Scanner
            scanner.close();
        }
    }
}
