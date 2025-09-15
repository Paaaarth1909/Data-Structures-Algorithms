#include<iostream>
using namespace std;
// WAP to check whether a person is eligible to vote or not
// if age is greater than or equal to 18

int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}