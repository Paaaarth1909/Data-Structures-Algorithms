/* Problem statement
Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.

Example:
Input: ‘N’ = 3

Output: 
A
B B
C C C */
public class alpha_ramp {
    static void alphaRamp(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char)('A' + i - 1) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 3;
        alphaRamp(n);
    }
}

//Time Complexity: O(N^2) - The outer loop runs N times, and the inner loop runs i times, where i varies from 1 to N.
//Space Complexity: O(1) - No additional space is used that grows with input size