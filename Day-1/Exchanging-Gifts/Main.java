import java.util.HashMap;
import java.util.Map;

public class Main {

    public static void find_youngest_member(int n, int m, int[][] gifts) {
        if (m == 0) {
            System.out.println(n);
            return;
        }
        Map<Integer, Integer> freq = new HashMap<>();

        for (int[] gift : gifts) {
            freq.merge(gift[1], 1, Integer::sum);
        }

        for (var entry : freq.entrySet()) {
            if (entry.getValue() == n - 1) {
                System.out.println(entry.getKey());
                return;
            }
        }
        System.out.println(-1);
    }
}