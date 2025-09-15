#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revNum=0;
    int dup=n;
    while(n>0){
        int digit = n % 10; // Get the last digit
        revNum = revNum * 10 + digit; // Build the reversed number
        n= n / 10; // Remove the last digit
    }
    cout << "Reversed Number: " << revNum << endl;
    if(dup == revNum){
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}