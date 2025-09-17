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
#include <iostream>
using namespace std;
void alphaRamp(int n) {
 for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing characters in each row
            cout << char('A' + i - 1)<<" "; // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }
}
//Time Complexity: O(N^2) - The outer loop runs N times, and the inner loop runs i times, where i varies from 1 to N.
//Space Complexity: O(1) - No additional space is used that grows with input size