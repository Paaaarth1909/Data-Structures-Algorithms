/* Ninja has been given a task to print the required star pattern and he asked your help for the same.

You must return an ‘N’*’N’ matrix corresponding to the given star pattern.

Example:
Input: ‘N’ = 4

Output: 

****
*  *
*  *
**** */
#include <iostream>
using namespace std;
void getStarPattern(int n) {

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n; j++) { // Loop for printing stars in each row
            if (i == 1 || i == n || j == 1 || j == n) { // Check if it's the first or last row/column
                cout << "*"; // Print star
            } else {
                cout << " "; // Print space
            }
        }
        cout << endl; // Move to the next line after printing stars in a row
    }
}
//Time Complexity: O(N^2)
//Space Complexity: O(1)