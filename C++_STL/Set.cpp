#include<iostream>
#include<set>
using namespace std;
void explainSet(){
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    /* Functionality of insert in vector can be used also , that only increases efficiency */

    // begin() , end() , rbegin() , rend() , size() , swap() , empty() are same as those of above 

    // {1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5
    auto it = st.find(6);

    // {1,4,5}
    st.erase(5); // erases 5 // takes logarithimic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // erases 2 and 3 // after erasing it becomes {1,4,5}

    // lower_bound() and upper_bound() are same as those of above as it does in vector

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}



