/* Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1 */
import java.util.Scanner;

public class Reverse_Number_Triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();

        for (int i = n; i >= 1; i--) { // Loop for each row
            for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
                System.out.print(j + " "); // Print number
            }
            System.out.println(); // Move to the next line after printing numbers in a row
        }

        sc.close();
    }
}


// Time Complexity: O(N^2) - Two nested loops, each running N times.
// Space Complexity: O(1) - No additional space used apart from input and output.