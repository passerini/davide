import java.util.Scanner;

public class Sottrazione {
    public static void main(String[] args)  {

        double n1,n2;
        int risultato;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci primo numero");
        n1 = input.nextDouble();

        System.out.println("inserisci secondo numero");
        n2 = input.nextDouble();

        Calcoli calcoli = new Calcoli(n1, n2);

        System.out.println("Il risultato e' = "+calcoli.getRisultato());
        
    }
}
