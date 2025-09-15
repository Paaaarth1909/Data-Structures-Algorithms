#include<iostream>
using namespace std;
#include<queue>
void explainPQ(){
    priority_queue<int>pq;
    
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout<<pq.top(); // Outputs: 10

    pq.pop(); // Removes 10, PQ is now {8, 5, 2}

    cout<<pq.top(); // Outputs: 8

    // size , swap and empty same as others 

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout<<pq.top(); // Outputs: 2

    
}