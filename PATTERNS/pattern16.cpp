#include<iostream>
using namespace std;
// WAP to print the following pattern:
//A
//BB    
//CCC
//DDDD
//EEEEE
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing characters in each row
            cout << char('A' + i - 1); // Print character
        }
        cout << endl; // Move to the next line after printing characters in a row
    }

    return 0;
}