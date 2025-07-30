/* Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *  */
#include<iostream>
using namespace std;

void nForest(int n) {
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing stars in each row
            cout << "* "; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    nForest(n);
}
