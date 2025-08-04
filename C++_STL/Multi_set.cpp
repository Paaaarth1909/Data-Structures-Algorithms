#include<iostream>
using namespace std;
#include<set>
void explainMultiSet(){
    // Everything is same as set 
    // only stoes duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's are erased // { }

    int cnt = ms.count(1); // returns 0

    // only a single 1 erased 
    ms.erase(ms.find(1)); // {1, 1}

    ms.erase(ms.find(1), ms.find(2)); // erases all 1's // { }

    // rest all functions same as set 
}