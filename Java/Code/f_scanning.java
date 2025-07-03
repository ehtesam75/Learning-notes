import java.util.Scanner;

public class f_scanning {
    public static void main(String[] args) {
        System.out.print("Enter age: ");
        Scanner scan = new Scanner(System.in);
        byte a = scan.nextByte();   //scanning a byte value
        System.out.println("your age is " + a );

        scan.nextLine(); // consume the newline character left by nextByte
        String name = scan.nextLine().trim();  //scan the full line including spaces
        //here trim remove leading and trailing spaces in the input
//        String first_name = scan.next(); //scan till it finds a space
        System.out.println("name  " + name);
    }
}
