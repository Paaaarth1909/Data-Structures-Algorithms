#include<iostream>
using namespace std;
void printDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " "; // Print the divisor
        }
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number
    printDivisors(n); // Call the function to print divisors