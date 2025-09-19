//WAP to print 1 to N using recursion 
import java.util.Scanner;

public class PrintNumbers {
    static void printNumbers(int i, int n) {
        if (i > n) return;
        System.out.print(i + " ");
        printNumbers(i + 1, n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int n = sc.nextInt();
        printNumbers(1, n);
        sc.close();
    }
}

