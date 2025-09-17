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
#include <iostream>
using namespace std;
void alphaHill(int n) {
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n - i; j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int j = 1; j <= i; j++) { // Loop for printing characters in ascending order
            cout << char('A' + j - 1)<<" "; // Print character
        }
        for (int j = i - 1; j >= 1; j--) { // Loop for printing characters in descending order
            cout << char('A' + j - 1)<<" "; // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }
}
//Time Complexity: O(N^2)
//Space Complexity: O(1)