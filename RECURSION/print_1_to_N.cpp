//WAP to print 1 to N using recursion 
#include <iostream>
using namespace std;

void printNumbers(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    printNumbers(i + 1, n);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    printNumbers(1, n);
    return 0;
}
