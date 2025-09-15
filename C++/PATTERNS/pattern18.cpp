#include<iostream>
using namespace std;
// WAP to print the following pattern:
// E
// D E 
// C D E
// B C D E      
// A B C D E

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = i; j <= n; j++) { // Loop for printing characters in each row
            cout << char('A' + j - 1); // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }

    return 0;
}