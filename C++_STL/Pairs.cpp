#include<iostream>
using namespace std;
void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>>p2={1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<" "<<arr[1].second;
}