// Scrivi un programma che effettua il calcolo della media dei voti della pagella, 
// inserendoli uno alla volta e terminando con l'inserimento del numero 0.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 11/11/24
 */

 import java.util.*;

 public class VotiPagella2 {
     public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
 
         double voto;
         double media;
         int Nvoti = 0;
         double somma = 0;
         int ris = 1;
         while (ris != 0) {
 
             System.out.println("Inserisci i voti: ");
             voto = input.nextInt();
 
             System.out.println("I voti sono terminati? 0 si, 1 no");
             ris = input.nextInt();
 
             if (voto >= 1 && voto <= 10) {
                 somma = somma + voto;
                 Nvoti++;
 
             } else {
                 System.out.println("Voto inserito non valido");
             }
         }
 
         media = somma / Nvoti;
 
         System.out.println("La media dei voti è: " + media);
 
     }
 
 }