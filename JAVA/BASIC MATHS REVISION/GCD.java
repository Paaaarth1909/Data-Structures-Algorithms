public class GCD {
    public static int gcd(int a, int b) {
        while(a > 0 && b > 0) {
            if(a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        return a + b;
    }

    public static void main(String[] args) {
        int a = 24, b = 36;
        System.out.println("GCD: " + gcd(a, b));
    }
}
