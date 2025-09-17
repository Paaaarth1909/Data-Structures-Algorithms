/* Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6 */
#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
int num = 1; // Initialize the starting number

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << num << " "; // Print number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }
    }

    // Time Complexity: O(N^2)   
    // Space Complexity: O(1)