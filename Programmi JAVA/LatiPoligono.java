// Scriviamo un programma che legge il numero dei lati di un poligono e 
// scrive il nome per quelli compresi tra tre e cinque lati.


import java.util.Scanner;

public class LatiPoligono {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int lati;

        System.out.println("inserisci numero lati:");
        lati=input.nextInt();

        switch (lati) {
            case 3:
                System.out.println("triangolo");
                break;
            case 4:
                System.out.println("qaudrilatero");
                break;
            case 5:
                System.out.println("pentagono");
                break;
            default:
                System.out.println("No,inserisci un altro numero di lati.");
                break;
        }
    }
}