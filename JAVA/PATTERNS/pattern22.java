
// WAP to print the following pattern:
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
import java.util.Scanner;

public class pattern22 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int row = 2 * n - 1;
        int col = 2 * n - 1;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int min = Math.min(Math.min(i, j), Math.min(row - i - 1, col - j - 1));
                System.out.print((n - min) + " ");
            }
            System.out.println();
        }
    }
}
