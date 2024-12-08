import java.util.*;

public class DatiAnagrafici {
    public static void main(String[] args)  {

        Scanner input = new Scanner(System.in);
        Anagrafica anagrafica = new Anagrafica();
       
        String p_email;

        System.out.println("inserire il nome");
        anagrafica.nome = input.nextLine();

        System.out.println("inserire il cognome");
        anagrafica.cognome = input.nextLine();

        System.out.println("inserire l'email");
        p_email = input.nextLine();
        anagrafica.registraEmail(p_email);

        System.out.println("i dati anagrafici sono : "); 
        anagrafica.stampaDati();
    }
}
