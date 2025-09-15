#include<iostream>
using namespace std;
// WAP to print the following pattern:
// ****
// *  *
// *  *
// ****
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

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

    return 0;
}