// WAP to print N to 1 using recursion
#include<iostream>
using namespace std;

void printNumbers(int i, int n) {
    if (i < 1) return;
    cout << i << " ";
    printNumbers(i - 1, n);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    printNumbers(n, n);
    return 0;
}
