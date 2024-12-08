
public class Anagrafica {

    public String nome;
    public String cognome;
    private String email;
    private boolean  registrata;


    public void registraEmail(String p_email){

        email = p_email;
        registrata = true;
    }

    public void stampaDati(){
        System.out.println("Nome: "+nome);
        System.out.println("Cognome: "+cognome);
        if(registrata == true){
            System.out.println("Email: "+ email);
        }else{
            System.out.println("Email non registrata");
    }

    }

}
