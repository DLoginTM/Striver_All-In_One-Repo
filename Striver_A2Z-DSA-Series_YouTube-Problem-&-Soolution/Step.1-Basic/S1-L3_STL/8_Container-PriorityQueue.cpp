// Container - Priority Queue
/**
    Note:
    through it name, we understand: who has the largest
    value stays at the top. The maximum elements stays at
    the top or the largest elements.
        If you use character then largest character, if integer
        then largest integer.
        If you using string the "lexicographically" largest string will
        at the top.

    the data in pq, is no in linear fashion,
    inside tree(tree's working principles) maintains.

*/


//Queue
void explainPriorityQueue(){
    priority_queue<int>pq;
    pq.push(5) //{5}
    pq.push(2) //{5, 2}
    pq.push(8) //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}


    cout<<pq.top(); // 10
    pq.pop(); // {8, 5, 2}
    cout<<pq.top(); // 8

    // size, swap, empty same as others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5) //{5}
    pq.push(2) //{5, 2}
    pq.push(8) //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}

    cout<<pq.top(); // 10




}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}




