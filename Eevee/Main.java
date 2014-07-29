import java.util.*;

public class Main {
    public static void main(String[] args) {
        String[] valid = { "vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon" };
        Scanner in = new Scanner(System.in);
        in.nextInt();
        String pattern = in.next();

        for (int i = 0; i < valid.length; i++) {
            if (isValid(valid[i], pattern)) {
                System.out.println(valid[i]);
                break;
            }
        }
    }

    private static final boolean isValid(String str, String pattern) {
        if (str.length() != pattern.length()) {
            return false;
        }

        for (int i = 0; i < str.length(); i++) {
            if (pattern.charAt(i) != '.' && str.charAt(i) != pattern.charAt(i)) {
                return false;
            }
        }

        return true;
    }
}
