public class d_typeCasting {
    public static void main(String[] args) {
        final float pi = 3.14F; //now pi is a constant, it cannot be changed
//        pi = 3.2f; error
        System.out.println(pi);

        //explicit type casting
        double x = (double) 3 / 2;
        System.out.println(x);

        //implcit type casting
        //happens with no data loss
        short xx = 10;
        int y = xx;
        //what compiler does is create a new int variable and copy the value of x into it
        //this is implicit type casting, also known as widening conversion
        //widening conversion is when a smaller data type is converted to a larger data type
        //byte > short > int > long > float > double


        // byte data type: range -128 to 127 (8 bits)
        byte age = 25;
        System.out.println("My age: " + age);

        // short data type: range -32,768 to 32,767 (16 bits)
        short salary = 15000;
        System.out.println("Monthly salary: " + salary);


        String s = "1";
        Integer.parseInt(s); //Converts the string "1" to an int primitive value (1).
        // Integer is the wrapper class for the primitive int type
        Short.parseShort(s); //returns a short value

        //note : from chatbot
//        Wrapper classes (Integer, Short, Double, etc.) are object versions of primitive types
//        Parse methods (parseInt(), parseShort()) convert strings to their corresponding primitive values
//        These methods throw NumberFormatException if the string cannot be parsed as a valid number
//
        System.out.println(3 + Integer.parseInt(s));
    }
}
