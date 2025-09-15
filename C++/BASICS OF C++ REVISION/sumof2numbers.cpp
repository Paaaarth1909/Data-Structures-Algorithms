#include<iostream>
using namespace std;

// take two numbers as input and print their sum using functions
int sum(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is: " << sum(a, b) << endl;
    return 0;
}

