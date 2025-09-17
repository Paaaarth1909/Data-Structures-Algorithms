/* Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  * */
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
  void nStarTriangle(int n) ;
    nStarTriangle(n);
    return 0;{
for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j < i; j++) { // Loop for leading spaces
            cout << " "; // Print space
        }
        for (int k = 1; k <= (2 * (n - i) + 1); k++) { // Loop for printing stars
            cout << "*"; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }
}
//Time Complexity: O(N^2) - Two nested loops, each running N times.
//Space Complexity: O(1) - No additional space used apart from input and output.