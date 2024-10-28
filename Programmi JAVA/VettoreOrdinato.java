// DEFINIRE LA LUNGHEZZA DEL VETTORE DA TASTIERA, CARICARE GLI ELEMENTI INTERI DA 1 A 100, 
//  VISUALIZZARE GLI ELEMENTI CARICATI, ORDINARE GLI ELEMENTI E 
//  STAMPARE GLI ELEMENTI ORDINATI.
// // /*  Autore : Passerini Davide
//  *  Classe : 4ID
//  *  Data : 24/10/24
//  */

import java.util.Arrays;
import java.util.Scanner;

public class VettoreOrdinato {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        // Richiediamo la lunghezza del vettore

        System.out.print("Inserisci la lunghezza del vettore: ");

        int lunghezza = input.nextInt();

        // Creiamo il vettore con la lunghezza fornita dall'utente
        int vettore[] = new int[lunghezza];

        // Carichiamo gli elementi nel vettore (da 1 a 100)
        for (int i = 0; i < lunghezza; i++) {

            System.out.println("Inserisci un numero intero tra 1 e 100 per il primo elemento");

            vettore[i] = input.nextInt();

        }

        for (int i = 0; i < lunghezza; i++) {

            System.out.println(vettore[i]);

        }
       
        Arrays.sort(vettore);   //Ordino il vettore

        System.out.println("Elementi ordinati:");  // Stampo gli elementi ordinati

        for (int i = 0; i < lunghezza; i++) {
           
            System.out.print(vettore[i] + " ");

        }
        
        System.out.println();

    }

}
