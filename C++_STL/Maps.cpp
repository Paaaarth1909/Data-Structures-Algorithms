#include<iostream>
using namespace std;
#include<map>
void explainMap(){
    map<int,int> mpp1;
    map<int,pair<int,int>> mpp2;
    map<pair<int,int>,int> mpp3;

    mpp1[1] = 2; // Inserting a key-value pair
    mpp1.emplace(3,1);
    mpp1.insert({2,4});

    mpp3[{2,3}] = 10;

    for (auto it : mpp1) {
        cout<<it.first<<" "<<it.second<<endl;

        
    }

    cout<<mpp1[1];
    cout<<mpp1[5];

    auto it = mpp1.find(2);
    cout<< (*it).second;

    auto it = mpp1.find(5);

    // This is the syntax
    auto  it= mpp1.lower_bound(2);
    auto  it= mpp1.upper_bound(3);

    // erase , swap , size , empty are same as above 

}