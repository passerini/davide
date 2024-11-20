package ProgettoRettangolo;

import java.util.Scanner;

public class ProgettoRettangolo {

    public static void main(String[] args) {
        double base, altezza, area, perimetro; // dichiarazione delle variabili
        Rettangolo r = new Rettangolo(); // dichiarazione di un oggetto r della classe Rettangolo
        
        Scanner s = new Scanner(System.in);

        System.out.print("Inserire la misura della base: ");
        base = s.nextDouble();
        r.setBase(base);
       
        System.out.print("Inserire la misura dell'altezza: ");
        altezza = s.nextDouble();
        r.setAltezza(altezza);
        
        System.out.println("L'area del rettangolo è: " + r.area());
        System.out.println("Il perimetro del rettangolo è: " + r.perimetro());
    }
}
