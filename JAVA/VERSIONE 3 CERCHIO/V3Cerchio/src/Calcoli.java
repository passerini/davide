
public class Calcoli {

    double area = 0;
    double circonferenza = 0;
  
    public Calcoli(double raggio) {

        area = (raggio * raggio) * 3.14;
        circonferenza = 6.28 * raggio;
    }

    public double getArea() {
        return area;
    }

    public double getCirconferenza() {
        return circonferenza;
    }
    
   

}
