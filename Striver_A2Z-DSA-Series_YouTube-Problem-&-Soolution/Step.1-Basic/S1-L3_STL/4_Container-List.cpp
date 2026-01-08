// Container - List
/**
    list is also, in dynamic nature as vector.

    in vector we use insert()and if you're inserting somewhere
    that does take a lot of time or we can say insert in vector
    is very costly.
        in list, internal operation maintained in a double linked-list way
        and in vector internal operation maintained in a single linked-list

    push_fron(), in list is very very cheap in complexity wise.
*/


//List
void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2, 4}

    ls.push_front(5);// {5, 2, 4}

    ls.emplace_front(); //{2,4}

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}


