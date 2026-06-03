package week_1.OOPS;

interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUsers implements LibraryUser {
    protected int age;
    protected String bookType;
    
    KidUsers(int age, String bookType){
        this.age = age;
        this.bookType = bookType;
    }
    
    @Override
    public void registerAccount(){
        if (age < 12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    
    @Override
    public void requestBook(){
        if (this.bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {
    protected int age;
    protected String bookType;
    
    AdultUser(int age, String bookType){
        this.age = age;
        this.bookType = bookType;
    }
    
    @Override
    public void registerAccount(){
        if (age > 12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    
    @Override
    public void requestBook(){
        if (this.bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo { 
    public static void main(String[] args) {

    System.out.println("Kid User Test 1");
    KidUsers kid1 = new KidUsers(10, "Kids");
    kid1.registerAccount();
    kid1.requestBook();

    System.out.println();

    System.out.println("Kid User Test 2");
    KidUsers kid2 = new KidUsers(18, "Fiction");
    kid2.registerAccount();
    kid2.requestBook();

    System.out.println();

    System.out.println("Adult User Test 1");
    AdultUser adult1 = new AdultUser(5, "Kids");
    adult1.registerAccount();
    adult1.requestBook();

    System.out.println();

    System.out.println("Adult User Test 2");
    AdultUser adult2 = new AdultUser(23, "Fiction");
    adult2.registerAccount();
    adult2.requestBook();
    }
}