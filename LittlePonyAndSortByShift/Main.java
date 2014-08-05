import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        int i;
        for (i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                break;
            }
        }

        if ((i + 1 >= arr.length || arr[arr.length - 1] <= arr[0]) && isAscending(arr, i + 1)) {
            System.out.println(arr.length - (i + 1));
        } else {
            System.out.println(-1);
        }
    }

    private static final boolean isAscending(int[] arr, int startIdx) {
        for (int i = startIdx; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }

        return true;
    }
}
