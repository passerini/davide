
public class Calcoli {

    int base,altezza,area,perimetro;

    public Calcoli(int base,int altezza) {

        area= base*altezza;
        perimetro = (base*2)+(altezza*2);

    }

    public int getArea() {
        return area;
    }

    public int getPerimetro() {
        return perimetro;
    }

    



}
