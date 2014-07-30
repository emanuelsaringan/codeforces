import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[in.nextInt()];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }

        int l;
        for (l = 0; l < arr.length - 1; l++) {
            if (arr[l] >= arr[l + 1]) {
                break;
            }
        }

        int r;
        for (r = arr.length - 1; r > 0; r--) {
            if (arr[r - 1] >= arr[r]) {
                break;
            }
        }

        if (l == arr.length - 1 && r == 0) {
            System.out.println("yes");
            System.out.println("1 1");
        } else {
            reverse(arr, l, r);

            if (isSorted(arr)) {
                System.out.println("yes");
                System.out.println((l + 1) + " " + (r + 1));
            } else {
                System.out.println("no");
            }
        }
    }

    private static final void reverse(int[] arr, int l, int r) {
        while (l < r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }

    private static final boolean isSorted(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] >= arr[i + 1]) {
                return false;
            }
        }

        return true;
    }
}
