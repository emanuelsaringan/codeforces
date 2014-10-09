import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();

        printSide();
        printSeats(k, 1, true, true);
        printSeats(k, 2, false, false);
        printAisle(k, 3);
        printSeats(k, 4, false, true);
        printSide();
    }

    private static final void printSide() {
        System.out.println("+------------------------+");
    }

    private static final void printSeats(int k, int row, boolean hasDriver, boolean hasLight) {
        // Handle back
        if (k >= row) {
            System.out.print("|O.");
        } else {
            System.out.print("|#.");
        }

        k -= Math.min(4, k);

        int numEmpty = 10;

        for (int i = (row == 4 ? 3 : row); i <= k; i += 3) {
            System.out.print("O.");
            numEmpty--;
        }

        for (int i = 0; i < numEmpty; i++) {
            System.out.print("#.");
        }

        // Handle front
        if (hasDriver) {
            System.out.print("|D|");
        } else {
            System.out.print("|.|");
        }

        // Handle light
        if (hasLight) {
            System.out.print(")");
        }

        System.out.println();
    }

    private static final void printAisle(int k, int row) {
        // Handle back
        if (k >= row) {
            System.out.println("|O.......................|");
        } else {
            System.out.println("|#.......................|");
        }
    }
}
