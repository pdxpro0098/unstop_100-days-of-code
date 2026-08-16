import java.util.HashMap;
import java.util.Map;

public class Main {

    static String distinct_k(String[] arr, int k) {

        Map<String, Integer> freq = new HashMap<>();

        for (String str : arr) {
            freq.merge(str, 1, Integer::sum);
        }

        for (String str : arr) {
            if (freq.get(str) == 1) {
                if (k == 1)
                    return str;
                k--;
            }
        }
        return "-1";
    }
}