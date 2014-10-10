import java.util.*;

public class Main {
    private static final String LOOKUP = "qwertyuiopasdfghjkl;zxcvbnm,./";

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println(solve(in.next(), in.next()));
    }

    private static final String solve(String dir, String line) {
        StringBuilder sb = new StringBuilder();
        int translate = 0;
        
        if ("R".equals(dir)) {
            translate = -1;
        } else {
            translate = 1;
        }

        for (int i = 0; i < line.length(); i++) {
            sb.append(LOOKUP.charAt(LOOKUP.indexOf(line.charAt(i)) + translate));
        }

        return sb.toString();
    }
}
