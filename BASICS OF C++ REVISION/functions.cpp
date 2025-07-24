#include<iostream>
using namespace std;

// functions

void printname( string name) {
    cout << " hey " << name << endl;

}
int main() {
    string name;
    cout << " enter your name " << endl;
    cin >> name;
    printname(name);
    return 0;
}