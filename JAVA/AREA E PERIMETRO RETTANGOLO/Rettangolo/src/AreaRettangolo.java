import java.util.Scanner;

public class AreaRettangolo {
    public static void main(String[] args) throws Exception {

        int base,altezza;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci la base");
        base = input.nextInt();

        System.out.println("inserisci l'altezza");
        altezza = input.nextInt();

        Calcoli calcoli = new Calcoli(base,altezza);

        System.out.println("il perimetro e' = "+ calcoli.getPerimetro());
        System.out.println("L'area e' = "+ calcoli.getArea());
    }
}
