

import java.util.Scanner;

public class TabellaPitagorica {

    public static void main(String[] args) {
        Scanner tastiera = new Scanner(System.in);
       
        int numero, c;
       
        System.out.print("inserire il numero  ");
       
        numero = tastiera.nextInt();
       
        System.out.println("");
       
        for(int i = 0; i <= 10; i ++){
           
            c = numero;
           
            c = c * i;
           
            System.out.print(c + " ");
           
        }
       
        System.out.println("");
       
    }  
}
