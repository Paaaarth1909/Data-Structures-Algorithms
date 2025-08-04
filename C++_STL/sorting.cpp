#include<iostream>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second<p2.second){
        return true;

    }
    else if (p1.second==p2.second){
        if(p1.first>p2.second){
            return true;
        }
        return false;
    }
    
}

void explainExtra(){
    // Example array for sorting
    int a[] = {5, 2, 9, 1};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, a + n);

    // Example vector for sorting
    vector<int> v = {5, 2, 9, 1};
    sort(v.begin(), v.end());

    sort(a+2,a+4);

    sort(a,a+n, greater<int>());
    
    pair<int,int>a[]= {{1,2},{2,1},{4,1}};

    //sort it according to second element
    // if second element is same then sort it according to first element but in descending order

    sort ( a , a+n , comp);

    // {{4,1},{2,1},{1,2}}};

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num=165786578687;
    int cnt = __builtin_popcountll(num);

    

}