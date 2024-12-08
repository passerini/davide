
import java.util.*;

public class ContoCorrente {
    public static void main(String[] args) {

        double prelievo, versamento;
        int scelta = 4;
        double saldoIniziale;

        Scanner input = new Scanner(System.in);
        

        System.out.println("inserisci il saldo del tuo conto: ");
        saldoIniziale = input.nextDouble();

        Calcoli calcoli = new Calcoli(saldoIniziale);
      

         while(scelta < 4){

            System.out.println("MENU : 1) VERSAMENTO \n 2) PRELIEVO  \n 3) CONTO FINALE  \n 4) TERMINA");
            scelta = input.nextInt();
            
            switch (scelta) {

                case 1:

                    System.out.println("inserire la cifra da versare sul conto: ");
                    versamento = input.nextDouble();
                    calcoli.setVersamento(versamento);
                    System.out.println("il saldo e': " + calcoli.getSaldo());
    
                    break;
    
                case 2:

                    System.out.println("inserire la cifra da prelevare dal conto: ");
                    prelievo = input.nextDouble();
                    calcoli.setPrelievo(prelievo);
                    System.out.println("il saldo e': " +calcoli.getSaldo());
    
                    break;
    
                case 3:

                    System.out.println("visualizza il conto finale: " + calcoli.getSaldo());
                    break;
    
                case 4:

                    System.out.println("Terminato il ciclo");
    
                    break;
    
            }

        }
    
    }

}
