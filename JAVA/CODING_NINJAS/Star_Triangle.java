/* Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*/

import java.util.Scanner;

public class Star_Triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) { 
            for (int j = 1; j <= n - i; j++) { 
                System.out.print(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) { 
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


    // Time Complexity: O(N^2)
    // Space Complexity: O(1)