public class Calcoli {

    double somma = 0;
    double divisione = 0;
    double moltiplicazione = 0;
    double sottrazione = 0;


    public Calcoli(double n1, double n2) {

        somma = n1 + n2;
        moltiplicazione = n1 * n2;
        divisione = n1 / n2;
        sottrazione = n1 - n2;
     }

    public double getSomma() {
        return somma;
    }

    public double getSottrazione() {
        return sottrazione;
    }

    public double getDivisione() {
        return divisione;
    }

    public double getMoltiplicazione() {
        return moltiplicazione;
    }

     



}
