public class g_switch_function {
    public static void print(){
        //why use static here?
        //because we are calling this method from a static context (main method)
        System.out.println("hello world");
    }

    public static void main(String[] args) {
        String day = "tuesday";
        switch (day){
            case "friday":
                System.out.println("today is saturday");
                break;
            case "sunday":
                System.out.println("today is sunday");
                break;
            case "monday":
                System.out.println("today is monday");
                break;
            default:
                System.out.println("some other day:)");
        }

        //CALLING A METHOD
        print();
        // note:
        // Java only has METHODS - it doesn't have standalone functions like some other languages.
        // Method in Java:
        // A block of code that belongs to a class
    }
}
