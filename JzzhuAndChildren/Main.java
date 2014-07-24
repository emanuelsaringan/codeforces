import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();

        Queue<Pair> q = new LinkedList<Pair>();
        for (int i = 0; i < n; i++) {
            q.offer(new Pair(i + 1, in.nextInt()));
        }

        while (q.size() != 1) {
            Pair p = q.poll();
            p.value -= m;

            if (p.value > 0) {
                q.offer(p);
            }
        }

        System.out.println(q.poll().id);
    }
}

class Pair {
    int id;
    int value;

    public Pair(int id, int value) {
        this.id = id;
        this.value = value;
    }
}
