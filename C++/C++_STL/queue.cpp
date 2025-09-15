#include<iostream>
#include<queue>
using namespace std;
void explainQueue(){
queue<int>q;
q.push(1) ; // {1}
q.push(2) ; // {1, 2}
q.emplace(4) ; // {1, 2, 4}

q.back() +=5 ; // {1, 2, 9}
cout<<q.back();// Outputs: 9

// Q is {1,2,9}
cout<<q.front(); // Outputs: 1

q.pop(); // Removes 1, Q is now {2, 9}

cout<<q.front(); // Outputs: 2

// size , swap , empty same as stack
}