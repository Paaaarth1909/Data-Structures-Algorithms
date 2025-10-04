public class count_digits {
    public static int count(int n) {
        return (int)(Math.log10(n)) + 1;
    }

    public static void main(String[] args) {
        int n = 12345;
        System.out.println("Number of digits: " + count(n));
    }
}
