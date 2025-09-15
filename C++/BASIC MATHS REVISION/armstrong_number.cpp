#include<iostream>
using namespace std;    
int main(){
    int n;
    int digit=n;
    int sum = 0;
    int revNum = 0;
    cin>>n;
    while(n>0){
        int digit = n % 10; // Get the last digit
        sum += digit * digit * digit; // Calculate the sum of cubes
        n= n / 10; // Remove the last digit
    }
    cout << "Reversed Number: " << revNum << endl;
    if(digit == sum){
        cout << "The number is a armstrong number." << endl;
    } else {
        cout << "The number is not a armstrong number." << endl;
    }
    return 0;
}