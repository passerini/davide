
public class Tangente {

    double angolo;
    double risultato;

    public Tangente(double angolo) {

        risultato = Math.sin(Math.toRadians(angolo));

    }

    public double getRisultato() {
        return risultato;
    }


}
