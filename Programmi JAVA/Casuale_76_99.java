// Dati due numeri reali compresi tra 76 e 99, 
// generati casualmente, visualizza il numero più grande.

/*  Autore : Passerini Davide
 *  Classe : 4ID
 *  Data : 04/11/24
 */

 import java.util.*;

 public class Casuale_76_99 {
 
     public static void main(String[] args) {

        Random random = new Random();
        int numero1 = random.nextInt(24) + 76; // 24 è il range (99 - 76 + 1)
        int numero2 = random.nextInt(24) + 76;

        System.out.println("Primo numero casuale: " + numero1);
        System.out.println("Secondo numero casuale: " + numero2);
 
         System.out.println("\n");

         if (numero1 > numero2){

            System.out.println("il numero più grande e': " + numero1);

         }else{

            System.out.println("il numero più grande e': " + numero2);
         }
 
     }
 
 }
 