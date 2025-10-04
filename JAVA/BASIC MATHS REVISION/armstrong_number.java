import java.util.Scanner;

public class armstrong_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int originalNum = n;
        int sum = 0;
        int revNum = 0;
        
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            revNum = revNum * 10 + digit;
            n = n / 10;
        }
        
        System.out.println("Reversed Number: " + revNum);
        if (originalNum == sum) {
            System.out.println("The number is an Armstrong number.");
        } else {
            System.out.println("The number is not an Armstrong number.");
        }
    }
}
