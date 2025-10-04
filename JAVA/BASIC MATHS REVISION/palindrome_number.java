import java.util.Scanner;

public class palindrome_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int revNum = 0;
        int dup = n;

        while (n > 0) {
            int digit = n % 10;
            revNum = revNum * 10 + digit;
            n = n / 10;
        }

        System.out.println("Reversed Number: " + revNum);
        if (dup == revNum) {
            System.out.println("The number is a palindrome.");
        } else {
            System.out.println("The number is not a palindrome.");
        }
    }
}
