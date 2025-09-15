#include<iostream>
using namespace std;
// WAP to print the following pattern:
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1

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

    return 0;
}