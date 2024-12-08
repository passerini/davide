import java.util.*;


public class Ipotenusa {
    public static void main(String[] args) throws Exception {

        Scanner input = new Scanner(System.in);

        double cateto1,cateto2;

        System.out.println("inserisci il primo cateto");
        cateto1 = input.nextDouble();

        System.out.println("inserisci il secondo cateto");
        cateto2 = input.nextDouble();

        Calcoli calcoli = new Calcoli(cateto1,cateto2);

        System.out.println("L'ipotenusa e' "+ calcoli.getIpotenusa());


    }
}
