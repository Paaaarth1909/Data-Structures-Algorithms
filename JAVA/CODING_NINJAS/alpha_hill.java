/* Problem statement
Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A */
public class alpha_hill {
    static void alphaHill(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print((char)('A' + j - 1) + " ");
            }
            for (int j = i - 1; j >= 1; j--) {
                System.out.print((char)('A' + j - 1) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 3;
        alphaHill(n);
    }
}

//Time Complexity: O(N^2)
//Space Complexity: O(1)