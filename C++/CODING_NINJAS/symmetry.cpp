/* Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         * */
#include <iostream>
using namespace std;
void symmetry(int n) {
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)spaces-=2;
        else spaces+=2;

    }
}
//Time Complexity: O(N^2)
//Space Complexity: O(1)