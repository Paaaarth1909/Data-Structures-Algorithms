#include<iostream>
using namespace std;
// WAP to print the following pattern:
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int row = 2 * n - 1;
    int col = 2 * n - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << n - min(min(i, j), min(row - i - 1, col - j - 1)) << " ";
        }
        cout << endl;
    }
}
// Output:
// Enter the value of n: 4
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4    
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// The time complexity of this code is O(n^2) because we have two nested loops, each running n times.