import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        Pair[] pairs = new Pair[n];
        for (int i = 0; i < n; i++) {
            pairs[i] = new Pair(in.next(), in.next());
        }

        int[] indexes = new int[n];
        for (int i = 0; i < n; i++) {
            indexes[i] = in.nextInt() - 1;
        }

        if (isValid(pairs, indexes)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    private static final boolean isValid(Pair[] pairs, int[] indexes) {
        Pair p = pairs[indexes[0]];
        String curId = p.first.compareTo(p.last) < 0 ? p.first : p.last;

        for (int i = 1; i < indexes.length; i++) {
            p = pairs[indexes[i]];

            String pMin = p.first.compareTo(p.last) <= 0 ? p.first : p.last;
            String pMax = p.first.compareTo(p.last) <= 0 ? p.last : p.first;

            if (pMin.compareTo(curId) >= 0) {
                curId = pMin;
                continue;
            }

            if (pMax.compareTo(curId) >= 0) {
                curId = pMax;
                continue;
            }

            return false;
        }

        return true;
    }
}

class Pair {
    String first = null;
    String last = null;

    public Pair(String first, String last) {
        this.first = first;
        this.last = last;
    }
}
