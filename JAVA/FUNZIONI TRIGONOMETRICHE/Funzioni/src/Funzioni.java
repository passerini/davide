import java.util.*;

public class Funzioni {
    public static void main(String[] args) {

        double angolo;
        Scanner input = new Scanner(System.in);

        System.out.println("inserisci l'angolo");
        angolo = input.nextDouble();

        Seno seno = new Seno(angolo);
        Tangente tangente = new Tangente(angolo);

        System.out.println("Il seno dell'angolo e' = " + seno.getRisultato());

    }
}
