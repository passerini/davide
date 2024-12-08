import java.util.*;

public class MainClass {

    public static void main(String[] args) throws Exception {

        int n1 = 5;
        int n2 = 7;

        Scanner input = new Scanner(System.in);

        System.out.println("inserisci primo numero");
        n1 = input.nextInt();

        System.out.println("inserisci secondo numero");
        n2 = input.nextInt();

        Somma sum = new Somma(n1 , n2);
        System.out.println("La somma è = " + sum.getSomma());

    }
}
