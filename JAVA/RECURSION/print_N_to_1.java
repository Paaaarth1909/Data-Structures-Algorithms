// WAP to print N to 1 using recursion
import java.util.Scanner;

public class print_N_to_1 {
    static void printNumbers(int i, int n) {
        if (i < 1) return;
        System.out.print(i + " ");
        printNumbers(i - 1, n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int n = sc.nextInt();
        printNumbers(n, n);
        sc.close();
    }
}
