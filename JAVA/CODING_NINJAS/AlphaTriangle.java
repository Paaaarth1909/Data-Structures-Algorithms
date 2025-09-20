/* Problem statement
Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

Example:
Input: ‘N’ = 3

Output: 
C
C B 
C B A */
public class AlphaTriangle {
    static void alphaTriangle(int n) {
        for (int i = 0; i < n; i++) {
            for (char ch = (char)('A' + n - 1 - i); ch <= (char)('A' + n - 1); ch++) {
                System.out.print(ch + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 3;
        alphaTriangle(n);
    }
}
    
//Time Complexity: O(N^2)
//Space Complexity: O(1)s