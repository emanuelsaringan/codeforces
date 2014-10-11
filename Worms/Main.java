import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] worms = new int[1000001];
        int k = 1;
        int lastIdx = 1;
        for (int i = 0; i < n; i++) {
            int a = in.nextInt();
            for (int j = 0; j < a; j++) {
                worms[lastIdx + j] = k;
            }

            lastIdx += a;
            k++;
        }

        int m = in.nextInt();
        for (int i = 0; i < m; i++) {
            System.out.println(worms[in.nextInt()]);
        }
    }
}
