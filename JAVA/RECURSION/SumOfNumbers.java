//WAP to find sum of first N numbers using recursion
import java.util.Scanner;

public class SumOfNumbers {
    static int sum(int i, int currentSum) {
        if (i < 1) return currentSum;
        return sum(i - 1, currentSum + i);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int n = sc.nextInt();
        System.out.println("Sum of first " + n + " numbers is: " + sum(n, 0));
        sc.close();
    }
}
