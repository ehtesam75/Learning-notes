public class g_switch {
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
    }
}
