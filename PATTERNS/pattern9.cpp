#include<iostream>
using namespace std;
// WAP to print the following pattern:
//       *
//      ***
//     *****
//    *******
//   *********
//   *********
//    *******
//     *****
//      ***
//       *

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper half of the pattern
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

    return 0;
}