// interface
interface library
{
    void register();
    void request();
}

// kid class and its methods
class kid_user implements library
{
    int age;
    String book;
    public void register()  // method to register a kid user
    {
        if(age<12)
        {
            System.out.println("You have successfully registered under a Kids Account");
        }
        else
        {
            System.out.println("Account not registered. Age must be less than 12 to register as a kid");
        }
    }

    public void request()  //method to request a book for a kid
    {
        if (book.equals("Kids")) 
        {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } 
        else 
        {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

// adult class and its methods
class adult_user implements library {
    int age;
    String book;
    public void register()   // method to register a adult user
    {
        if(age>=12) 
        {
            System.out.println("You have successfully registered under an Adult Account");
        } 
        else 
        {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void request()   // method to request a adult book
    {
        if(book.equals("Fiction")) 
        {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } 
        else 
        {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
// main class
class oop_1
{
    public static void main(String[] args) 
    {
        // Test Case 1: KidUser
        kid_user kid = new kid_user();
        kid.age = 10;
        kid.register();
        kid.age = 18;
        kid.register();
        kid.book = "Kids";
        kid.request();
        kid.book = "Fiction";
        kid.request();
        System.out.println();

        // Test Case 2: AdultUser
        adult_user adult = new adult_user();
        adult.age = 5;
        adult.register();
        adult.age = 23;
        adult.register();
        adult.book = "Kids";
        adult.request();
        adult.book = "Fiction";
        adult.request();        
    }
}
