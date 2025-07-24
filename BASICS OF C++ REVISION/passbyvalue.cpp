#include<iostream>
using namespace std;

// pass by value
void passByValue(int x) {
    x = 100;
    cout << "Value of x inside function: " << x << endl;
}
int main() {
    int x = 50;
    cout << "Value of x before function call: " << x << endl;
    passByValue(x);
    cout << "Value of x after function call: " << x << endl;
    return 0;
}