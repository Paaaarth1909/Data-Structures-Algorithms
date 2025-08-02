#include<iostream>
using namespace std;
#include<stack>
void explainStack(){
    stack<int>st;
    st.push(1);// {1}
    st.push(2);// {1, 2}
    st.push(3);// {1, 2, 3}
    st.push(3);// {1, 2, 3, 3}
    st.emplace(5);// {1, 2, 3, 3, 5}

    cout<<st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); //st looks like {1, 2, 3, 3}

    cout<<st.top(); // 3

    cout<<st.size(); // 4

    cout<<st.empty(); 

    stack<int>st1,st2;
    st1.swap(st2); 


}