import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Set<Integer> composites = new HashSet<Integer>();

        for (int i = 4; i <= 1000000; i++) {
            if (i % 2 == 0 || isComposite(i)) {
                composites.add(i);
            }
        }

        int n = in.nextInt();
        for (int curComp : composites) {
            if (composites.contains(n - curComp)) {
                System.out.println(curComp + " " + (n - curComp));
                break;
            }
        }
    }

    private static final boolean isComposite(int n) {
        int limit = (int) Math.sqrt(n);
        for (int i = 3; i <= limit; i += 2) {
            if (n % i == 0) {
                return true;
            }
        }

        return false;
    }
}
