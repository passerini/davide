package ProgettoRettangolo;

public class Rettangolo {
    private double base;
    private double altezza;
   
    // costruttori
    public Rettangolo() {
        System.out.println("Utilizzato Costruttore classe Rettangolo SENZA parametri");
        base = 0;
        altezza = 0;
    }
   
    public Rettangolo(double base, double altezza) { // con parametri
        System.out.println("Utilizzato Costruttore classe Rettangolo CON parametri");
        this.base = base;
        this.altezza = altezza;
    }
   
    // set e get
    public double getBase() {
        return base;
    }
   
    public void setBase(double base) {
        this.base = base;
    }
   
    public double getAltezza() {
        return altezza;
    }
   
    public void setAltezza(double altezza) {
        this.altezza = altezza;
    }
   
    // metodi
    public double area() {
        return base*altezza;
    }
    public double perimetro() {
        return (base*2)+(altezza*2);
    }
}
