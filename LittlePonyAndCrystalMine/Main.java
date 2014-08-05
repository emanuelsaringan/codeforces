import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int numStar = (n / 2);
        int numD = 1;

        StringBuilder sb = new StringBuilder();
        Stack<String> stk = new Stack<String>();

        // Print top
        while (numStar > 0) {
            sb.setLength(0);
            for (int i = 0; i < numStar; i++) {
                sb.append("*");
            }

            for (int i = 0; i < numD; i++) {
                sb.append("D");
            }

            for (int i = 0; i < numStar; i++) {
                sb.append("*");
            }

            System.out.println(sb.toString());
            stk.push(sb.toString());

            numStar--;
            numD += 2;
        }

        // Print middle
        sb.setLength(0);
        for (int i = 0; i < numD; i++) {
            sb.append("D");
        }
        System.out.println(sb.toString());

        // Print bottom
        while (!stk.isEmpty()) {
            System.out.println(stk.pop());
        }
    }
}
