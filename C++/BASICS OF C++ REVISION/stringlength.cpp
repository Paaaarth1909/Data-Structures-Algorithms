#include<iostream>
using namespace std;
// string length and accessing the string

int main () {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Length of the string is: " << str.length() << endl;
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length()-1] << endl;
    return 0;
}