abstract class Compartment {
    public abstract String notice();
}

class FC extends Compartment {
    public String notice() {
        return "First Class";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies";
    }
}

class General extends Compartment {
    public String notice() {
        return "General";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] arr = new Compartment[10];

        for(int i = 0; i < arr.length; i++){
            int r = (int)(Math.random() * 4) + 1;

            switch(r){
                case 1:
                    arr[i] = new FC();
                    break;
                case 2:
                    arr[i] = new Ladies();
                    break;
                case 3:
                    arr[i] = new General();
                    break;
                case 4:
                    arr[i] = new Luggage();
                    break;
            }
        }

        for(Compartment c : arr){
            System.out.println(c.notice());
        }
    }
}