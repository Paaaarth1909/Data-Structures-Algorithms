#include<iostream>
using namespace std;

// This program prints a square pattern of asterisks (*) with 4 rows and 4 columns.

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}