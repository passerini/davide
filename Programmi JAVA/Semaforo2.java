/* Leggi il valore di un numero compreso tra 0 e 2 che 
corrispondono agli stati di un semaforo e visualizza una parola 
che lo traduce nel colore corrispondente.

0 - VERDE           1 - ARANCIO        2 - ROSSO
  
  
   Autore : Passerini Davide
   Classe : 4ID
   Data : 07/10/24

 */

import java.util.Scanner;

public class Semaforo2 {

    public static void main(String[] args) {

        int numero;

        Scanner input = new Scanner(System.in);

        System.out.println("Inserisci un numero tra 0 e 2: ");
        numero = input.nextInt();

        if (numero == 0) {

            System.out.println("VERDE");
        
        }else if( numero == 1){

            System.out.println("ARANCIO");
            
        }else if( numero == 2){

            System.out.println("ROSSO");
            
        }



    }

}
