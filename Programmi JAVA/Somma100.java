/*
Scrivi un programma che effettua la somma dei numeri inseriti dall'utente fino
a raggiungere il numero 1000 e indica quanti numeri sono stati sommat
 */


import java.util.*;

public class Somma100 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int somma = 0;
        int conteggio = 0;

        System.out.println("Inserisci numeri interi. La somma si fermerà al raggiungimento di 1000 o più.");

        while (somma < 1000) {
            System.out.print("Inserisci un numero: ");
            int numero = scanner.nextInt();
            somma += numero;
            conteggio++;
        }

        System.out.println("La somma totale è: " + somma);
        System.out.println("Hai inserito " + conteggio + " numeri.");

    }
}