import java.util.Scanner;

public class check_prime_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                if (i != n / i) {
                    cnt++;
                }
            }
        }

        if (cnt == 2) {
            System.out.println(n + " is a prime number.");
        } else {
            System.out.println(n + " is not a prime number.");
        }
    }
}
