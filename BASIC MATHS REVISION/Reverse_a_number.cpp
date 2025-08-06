#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revNum=0;
    while(n>0){
        int digit = n % 10; // Get the last digit
        n= n / 10; // Remove the last digit
}
cout << "Reversed Number: " << revNum << endl;
    return 0;
}