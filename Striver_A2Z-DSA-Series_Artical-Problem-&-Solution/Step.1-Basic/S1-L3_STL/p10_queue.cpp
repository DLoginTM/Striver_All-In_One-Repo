////https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//
/**
    Note:
    A queue is a linear list of elements in which deletions can
    take place only at one end called the front, and insertions
    can take place only at the end called the rear.

    Queu -  (FIFO), the terms FRONT and REAR.


    Example:
        queue<int> q;
        queue<string> q;


    push() : to insert an element in the queue.
        queue<int> q
        q.push(110);
        q.push(220);

    pop() : deletes the first element of the queue.
        q.pop();

    front() : returns a reference to the first element of the queue.
        q.front();
    back() : returns a reference to the last element of the queue.
        q.back();

    emplace() : to insert an element in the queue.
        queue<int> q;
        q.emplace(1);
        q.emplace(2);

    size() : returns the number of elements on the queue.
        q.size();

    empty() : to check if the queue is empty or not.
        q.empty();

*/


#include<bits/stdc++.h>
using namespace std;

void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())  //Iterate while the queue in not empty
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}

int main(){
    queue<int> q;

    for(int i=1;i<=5;i++)
        q.push(i);  //Push the elements in the queue

    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);

    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;

    cout<<"Pop the front element: "<<endl;
    q.pop();  //Pop the elements out of the queue
    printqueue(q);


    //printing the element in queue same way as stack.
    //need to copy for safe(not hamper original one).
}
