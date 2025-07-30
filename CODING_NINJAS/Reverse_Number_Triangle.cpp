/* Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1 */
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << j << " "; // Print number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

