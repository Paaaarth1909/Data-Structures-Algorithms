#include<iostream>
using namespace std;

// WAP to print the following pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int num = 1; // Initialize the starting number

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << num << " "; // Print number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

    return 0;
}