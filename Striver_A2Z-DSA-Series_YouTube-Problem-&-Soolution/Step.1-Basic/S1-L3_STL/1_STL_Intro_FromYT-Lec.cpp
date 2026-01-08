//https://www.youtube.com/watch?v=RRVYpIET_RU

/**
    Note: Shorts notes:
    #include<math> - math related algo
    #include<string.h> - string related algo,
        so to reduce time we use this : #include <bits/stdc++.h>
        instead of importing library 1 by 1.
*/

/**
    Important Note:
    c++ - STL, divided in to 4 parts.
    1. Algorithm | 2.Containers | 3.Functions | 4.Iterators
*/


//------------>Basic structure:
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//about Function:
void printN(){
    //void func, returns nothing.
    cout << "qwertyu";
}

//this is int, but it can be double, long long anything
int sum(int a, int b){
    //int func, return integer
    return a+b;
}

int main(){
    printN();

    int s = sum(5,6);
    cout<<s; //print sum
    return 0;
}
