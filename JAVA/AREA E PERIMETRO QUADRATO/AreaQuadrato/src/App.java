import java.util.Scanner;

public class App {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int lato;

        System.out.println("inserisci il lato:");
        lato= input.nextInt();


        Quadrato quadrato = new Quadrato(lato);


        System.out.println("l'area e' = "+quadrato.getArea());

        System.out.println("Il perimetro e' = "+quadrato.getPerimetro());

        
    }
}
