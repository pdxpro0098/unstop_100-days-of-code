
public class Main{
    public static void determine_color(String s){
         if ((s[0] + s[1]) % 2 == 0)
            return "Black";
        return "White";
    }
}