import java.security.MessageDigest;

public class b_string {
    public static void print(){
        //why use static here?
        //because we are calling this method from a static context (main method)
        System.out.println("hello world");
    }

    public static void main(String[] args){
        String name = new String("   hello world");
//        string is reference type in java
        String name2 = "hello world " + "string concatination"; //this doesn't mean its premetive type
        //its just a shortcut for creating a string object
        System.out.println(name2);

        System.out.println(name2.endsWith("on"));
        System.out.println(name2.startsWith("hel"));
        System.out.println(name2.length());

        System.out.println(name.indexOf("l")); //finds the first oc     currence of l
        System.out.println(name.indexOf(("new"))); //returns -1 if not found

        System.out.println(name.replace('o', 'O'));
        //btw this doesn't change the original string, it returns a new string
        //cuz in java strings are immutable; means they cannot be changed after creation
        System.out.println(name);

        System.out.println(name.toUpperCase());

        System.out.println(name.trim()); //removes leading and trailing spaces

        String a = "hello";
        System.out.println("is equal : " + (a == "hello"));
        System.out.println(a.equals("hello"));

        //CALLING A METHOD
        print();
    }
}
