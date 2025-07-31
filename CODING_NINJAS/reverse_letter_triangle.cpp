/* Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A */
#include <iostream>
using namespace std;
void nLetterTriangle(int n) {
for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing characters in each row
            cout << char('A' + j - 1)<<" "; // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }
}
//Time Complexity: O(N^2)
//Space Complexity: O(1)