#include<iostream>
using namespace std;
// WAP to print the following pattern:
//      A
//     ABA  
//    ABCBA
//   ABCDCBA

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n - i; j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int j = 1; j <= i; j++) { // Loop for printing characters in ascending order
            cout << char('A' + j - 1); // Print character
        }
        for (int j = i - 1; j >= 1; j--) { // Loop for printing characters in descending order
            cout << char('A' + j - 1); // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }

    return 0;
}