import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        LinkedList<Integer> list = new LinkedList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(in.nextInt());
        }

        // Sort floors
        Collections.sort(list);

        Queue<Integer> elevator = new LinkedList<Integer>();
        for (int i = 0; i < k && !list.isEmpty(); i++) {
            elevator.offer(list.pollLast());
        }

        int curFloor = 1;
        int total = 0;
        while (!elevator.isEmpty()) {
            int maxFloor = elevator.peek();
            total += Math.abs(maxFloor - curFloor);
            curFloor = maxFloor;

            // Empty elevator
            while (!elevator.isEmpty()) {
                elevator.poll();
            }

            // Go back to first floor
            total += Math.abs(curFloor - 1);
            curFloor = 1;

            // Reload elevator
            for (int i = 0; i < k && !list.isEmpty(); i++) {
                elevator.offer(list.pollLast());
            }
        }

        System.out.println(total);
    }
}
