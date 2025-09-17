/* Problem statement
Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

Given 'N', print the corresponding pattern.

Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1  */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    numberCrown(n);
    return 0;
}

void numberCrown(int n) {

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << j << " "; // Print number
        }
        for (int j = 1; j <= (2 * (n - i)); j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int j = i; j >= 1; j--) { // Loop for printing numbers in reverse order
            cout << j << " "; // Print number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }
}
//Time Complexity: O(N^2) - Two nested loops, each running N times.
//Space Complexity: O(1) - No additional space used apart from input and output.    