#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++; // Count the divisor
            if(i != n/i) {
                cnt++; // Count the corresponding divisor
            }
        }
    }
    if (cnt == 2) {
        cout << n << " is a prime number." << endl; // Output if prime
    } else {
        cout << n << " is not a prime number." << endl; // Output if not prime
    }
    return 0;
}