/* Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
1 2 
1 2 3 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    nTriangle(n);
}

void nTriangle(int n) {
	for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << j << " "; // Print number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

}

// Time Complexity: O(N^2)
// Space Complexity: O(1) - No additional space used apart from input and output.