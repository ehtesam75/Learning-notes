import java.text.NumberFormat;

public class e_math_formating_number {
    public static void main(String[] args) {
//        math class
        System.out.println(Math.round(3.49f)); // rounds to the nearest integer
        System.out.println(Math.ceil(3.44f));

        int res = Math.max(3, 5);
        System.out.println(res);
        double ans = Math.random(); //returns a random number between 0.0 and 1.0
        System.out.println(ans);

        ans = Math.random()  * 10000; //random number between 0.0 and 10000.0
        System.out.println(ans);

        int r = (int) Math.round(ans);   //round returns a double, so we need to cast it to int
        System.out.println(r);


//        formating number
//        NumberFormat currency = new numberFormat(); //can't do this
//        numberformat class is a abstract class and we can't create an instance of it
        NumberFormat currency = NumberFormat.getCurrencyInstance();
        //here we are using a static method to get an instance of the class
        System.out.println(currency.format(3343.334)); //$3,343.33

        //or we could do this instead
        String store = NumberFormat.getCurrencyInstance().format(3343.334);
        System.out.println(store);
        //this is called method chaining (calling a method on the return value of another method)
    }

}
