//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers

//http://takeuforward.org/c/stack-in-c-stl
/**
    Note:
    A stack is a non-primitive linear data structure.

    it is an ordered list in which the addition of a new data
    item and deletion of the already existing data item is done
    from only one end known as the top of the stack (TOS).

    Stack - LIFO.



    push() – to insert an element in the stack.
        stack<int> s;
        s.push(110);
        s.push(220);

    pop() – deletes the last element of the stack.
        s.pop();

    top() – returns the element at the top of the stack.
        s.top();

    emplace() – to insert an element in the stack.
        stack<int> s;
        s.emplace(1);
        s.emplace(2);

    Note: Stack ---> Push() & emplace() works as same.

    size() – returns the number of elements on the stack.
        s.size();
    empty() – to check if the stack is empty or not.
        s.empty();

*/


#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())  //Iterate while the stack isn't empty
    {
        cout<<s2.top()<<"\n";
        s2.pop();  //Keep popping the elements
    }
}

int main(){
    stack<int> s;
    for(int i=1;i<=5;i++){
        s.push(i);  //Push in the value of i int the stack
    }

    cout<<"The elements of the stack are:"<<endl;
    printstack(s);

    /**
        //print elem with out function:
        // Create a copy so original stack is not modified
        stack<int> temp = s;

        while(!temp.empty()){
            cout << temp.top() << endl;
            temp.pop();
        }

    */

    /**
        //Using recursion (advanced, but still modifies stack temporarily)
        void print(stack<int>& s){
            if(s.empty()) return;

            int x = s.top();
            s.pop();

            cout << x << endl;
            print(s);

            s.push(x);   // restore
        }

    */


    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;

    cout<<"Pop the top element: "<<endl;
    s.pop();  //Pop the elements
    printstack(s);

    /**
        // Print again after pop
        temp = s;
        while(!temp.empty()){
            cout << temp.top() << endl;
            temp.pop();
        }
    */
}
