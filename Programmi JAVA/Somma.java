import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Somma {
    public static void main(String[] args) {
        
        // Crea un'istanza di BufferedReader per leggere l'input da tastiera
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        
        try {
            // Chiede il primo numero reale
            System.out.print("Inserisci il primo numero reale: ");
            String input1 = reader.readLine();
            double numero1 = Double.parseDouble(input1);

            // Chiede il secondo numero reale
            System.out.print("Inserisci il secondo numero reale: ");
            String input2 = reader.readLine();
            double numero2 = Double.parseDouble(input2);

            // Calcola la somma dei due numeri
            double somma = numero1 + numero2;

            // Visualizza la somma
            System.out.println("La somma dei due numeri è: " + somma);

        } catch (IOException e) {
            System.out.println("Errore di input/output: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Errore: Inserisci un numero valido.");
        }
    }
}
