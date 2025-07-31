/* Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  * */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

  void nStarDiamond(int n) ;
    nStarDiamond(n);
    return 0;
}

void nStarDiamond(int n) {
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n - i; j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Loop for printing stars
            cout << "*"; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }

    // Lower half of the pattern
    for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = 1; j <= n - i; j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Loop for printing stars
            cout << "*"; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }
    }