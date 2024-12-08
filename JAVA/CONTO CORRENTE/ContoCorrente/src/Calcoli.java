
public class Calcoli {

    double saldo = 0;

    public Calcoli(double saldoIniziale) {

        saldo = saldoIniziale;

    }

    public double getSaldo() {
        return saldo;

    }


    public void setVersamento(double versamento) {
        saldo = saldo + versamento;
    }


    public void setPrelievo(double prelievo) {
        saldo = saldo - prelievo;
    }

    

}
    


   
   