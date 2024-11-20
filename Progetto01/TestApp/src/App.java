import datas.Somma;

public class App {

    public static void main(String[] args) throws Exception {

        System.out.println("Hello, World!");
        int numeroUno = 1;
        int numeroDue = 2;


        Somma somma = new Somma(numeroUno, numeroDue);
        
        System.out.println("La somma è: " + somma.getTotale());

    }
}
