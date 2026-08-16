public class Main{
    public static String determineColor(String s) {
        if ((s.charAt(0) + s.charAt(1)) % 2 == 0)
            return "Black";
        return "White";
    }
}