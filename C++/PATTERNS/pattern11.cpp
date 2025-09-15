#include<iostream>
using namespace std;
// WAP to print the following pattern:
// 1 0
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            if ((i + j) % 2 == 0) { // Check if the sum of row and column indices is even
                cout << "1 "; // Print 1
            } else {
                cout << "0 "; // Print 0
            }
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

    return 0;
}