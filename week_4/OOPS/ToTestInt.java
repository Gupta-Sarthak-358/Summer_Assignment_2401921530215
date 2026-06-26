package week_4.OOPS;

interface Test {
    int square(int n);
}

class Arithmetic implements Test {

    @Override
    public int square(int n) {
        return n * n;
    }
}

public class ToTestInt {
    public static void main(String[] args) {

        Arithmetic obj = new Arithmetic();

        int num = 6;
        System.out.println("Square of " + num + " = " + obj.square(num));
    }
}