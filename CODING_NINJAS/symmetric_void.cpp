/* Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * *  */

#include <iostream>
using namespace std;
void symmetry(int n) {
    int iniS=0;
    for (int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";

        }
        for (int j=0;j<iniS;j++){
            cout<<" ";


        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";

        }
        iniS+=2;
        cout<<endl;
    }
    iniS=8;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        for (int j=0;j<iniS;j++){
            cout<<" ";


        }
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        iniS-=2;
        cout<<endl;
    }
}
//Time Complexity: O(N^2)
//Space Complexity: O(1)