/* Ninja has been given a task to print the required pattern and he asked for your help with the same.

You must print a matrix corresponding to the given number pattern.

Example:
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444 */
#include <iostream> 
using namespace std;
void getNumberPattern(int n) {
 int row = 2 * n - 1;
    int col = 2 * n - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << n - min(min(i, j), min(row - i - 1, col - j - 1));
        }
        cout << endl;
    }
    }
    //TIME COMPLEXITY: O(N^2)
    //SPACE COMPLEXITY: O(1)
    