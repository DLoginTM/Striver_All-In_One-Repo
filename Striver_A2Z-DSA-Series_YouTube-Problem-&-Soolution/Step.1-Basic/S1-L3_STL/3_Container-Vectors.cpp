// Container - Vectors
/**
    if I want to store 5 elem, basically try array
    like: int a[5] = {-,-,-,-,-};
    but we know that array can not modify, so we can not add
    any other elem int this array. Cause, array is constant size.


    In vector, we can do this, cause vector is dynamic in anutre.

    Generically, emplace_back() s faster that push_back()

    vector<int>::iterator it = v.begin();,
    here v.begin points to the memory-address of that
    1st element in vector not the 1st element directly.

    vector<int>:: iterator it = v.end();
    it = v.end() point, right after last element address
    but if we do it -- then it point last element not address.



*/


//vectors
void explainVectors(){
    vectors<int>v; //declair vector can be in anything double, char, string

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    v.push_back({1,2}); // it might be vec.push_back not "v."
    v.emplace_back(1,2);// it might be vec.emplace_back not "v."

    //here 5 is size and 100 is element
    //like this(100,100,100,...100)
    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    //-------------->access elements part from here, important.
    //iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *it <<" ";

    it = it+2;
    cout<< *it <<" ";

    vector<int>:: iterator it = v.end();

    vector<int>:: iterator it = v.rend();

    vector<int>:: iterator it = v.rbegin();

    cout << v[0] << " " <<v.at(0);

    cout << v.back() << " ";


    for(vector<int>:: iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) <<" ";
    }

    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) <<" ";
    }

    for(auto it : v){
        cout << it <<" ";
    }

    //{10, 20, 12, 23}
    v.erase(v.begin()+1);
    //{10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin() +4); // //{10,20,35} start, end]


    //Inset function
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int>copy(2,50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}


    //{10, 20}
    cout << v.size(); //2

    //{10, 20}
    v.pop_back();//{10}

    //v1 -> {10, 20}
    //v2 -> {30, 40}
    v1.swap(v2); //v1 -> {30,40}, v2 -> {10, 20}

    v.clear();

    cout <<v.empty();
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}

