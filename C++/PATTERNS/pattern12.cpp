#include<iostream>
using namespace std;    
// // WAP to print the following pattern:
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

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

    return 0;
}