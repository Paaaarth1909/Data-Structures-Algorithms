/* Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
* */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    seeding(n);
    return 0;
}

void seeding(int n) {

    for (int i = n; i >= 1; i--) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing stars in each row
            cout << "* "; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }
}
