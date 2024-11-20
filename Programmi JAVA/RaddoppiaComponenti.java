// Scrivere un programma che dopo aver caricato in memoria 
// un array di numeri interi con 15 componenti,
//  raddoppia il valore delle prime 10 componenti.

import java.util.*;

public class RaddoppiaComponenti {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int vet[] = new int[15];

        for (int i = 0; i < 15; i++) {

            System.out.println("inserisci i numeri:");
            vet[i] = input.nextInt();

        }

        for (int i = 0; i < 10; i++) {

            vet[i]*=2;
        }
        System.out.println("Gli elementi del vettore sono: ");
        for (int i = 0; i < 15; i++) {

        System.out.print(vet[i]+ "  ");
           
        }




    }

}