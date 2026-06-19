package week_3.OOPS;

abstract class Compartment{
    public abstract String notice();
}

class FirstClass extends Compartment{
    @Override
    public String notice() {
        return "First Class: Premium services and amenities.";
    }
}
class Ladies extends Compartment{
    @Override
    public String notice() {
        return "Ladies: Special services for female passengers.";
    }
}
class General extends Compartment{
    @Override
    public String notice() {
        return "General: Standard services for all passengers.";
    }
}
class Luggage extends Compartment{
    @Override
    public String notice() {
        return "Luggage: Special services for luggage handling.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        for (int i = 0; i < compartments.length; i++) {
            int random = (int)(Math.random() * 4) + 1;
            switch (random) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }
        for (Compartment compartment : compartments) {
            System.out.println(compartment.notice());
        }
    }
}