// Scrivere un programma che dopo aver caricato in memoria 
// un array di numeri interi con 15 componenti,
//  raddoppia il valore delle prime 10 componenti.

import java.util.*;

public class Maggiore {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n1, n2, n3;

        System.out.println("inserisci il primo numero");
        n1 = input.nextInt();

        System.out.println("inserisci il secondo numero");
        n2 = input.nextInt();

        System.out.println("inserisci il terzo numero");
        n3 = input.nextInt();

        if (n1 > n2 && n1 > n3) {

            System.out.println("il numero maggiore e'" + n1);

        } else if (n2 > n1 && n2 > n3) {

            System.out.println("il numero maggiore e'" + n2);
        } else {

            System.out.println("il numero maggiore e'" + n3);
        }

    }
}
