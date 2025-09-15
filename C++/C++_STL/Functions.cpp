#include<iostream>
using namespace std;
void print() {
    cout<<"raj";
}
int sum(int a, int b) {
    return a + b;
}
int main() {
    print();
    int s = sum(10, 20);
    cout<<s;
    return 0;
}