import java.util.*;

public class Cerchio {
    public static void main(String[] args)  {

        double raggio = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("Inserisci il raggio: ");
        raggio = input.nextDouble();

        Calcoli Calcoli = new Calcoli(raggio);

        System.out.println("L'area del cerchio e' = " + Calcoli.getArea());
        
        System.out.println("La circonferenza del cerchio e' = " + Calcoli.getCirconferenza());


    }
}
