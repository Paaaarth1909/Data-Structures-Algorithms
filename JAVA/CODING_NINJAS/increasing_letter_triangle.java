/* Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C */
public class increasing_letter_triangle {
    static void nLetterTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char)('A' + j - 1) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 3;
        nLetterTriangle(n);
    }
}


    //Time Complexity: O(N^2)
    //Space Complexity: O(1)