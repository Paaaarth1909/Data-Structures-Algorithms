//WAP to find sum of first N numbers using recursion
#include<iostream>
using namespace std;

int sum(int i, int currentSum) {
    if (i < 1) return currentSum;
    return sum(i - 1, currentSum + i);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is: " << sum(n, 0) << endl;
    return 0;
}
