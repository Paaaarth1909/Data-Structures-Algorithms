#include<iostream>
#include<vector>
using namespace std;
void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    vector<int>v(5,100);
    vector<int>v(5);
    vector<int>v1(5,100);
    vector<int>v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout<<*(it)<<" ";
    
    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator it = v.rend();
    vector<int>::reverse_iterator it = v.rbegin();

    cout <<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int>::iterator it=v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    
    }
    for(auto it=v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    for(auto it : v){
        cout<<it<<" ";
    }

    




}