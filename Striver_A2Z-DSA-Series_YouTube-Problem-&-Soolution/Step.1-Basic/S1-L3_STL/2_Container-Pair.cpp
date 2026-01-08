// Container - Pair
/**
    pairs, is a part of utility library.

    If we want store 3,4 or more variable,we can use nested property of "pair"
            ex: pair<int, pair<int,int>> p = {1, {3,4}};

    Data type can be anything, "pair" can be a datatype


*/

//pair
void explainPair(){
    pair<int, int> p = {1,3};
    //here <int,int> -> can be anything, double, character etc
    cout <<p.first << " " <<p.second;


    pair<int, pair<int,int>> p = {1, {3,4}};
    count << p.first << " " << p.second.second << "" << p.second.first;

    pair<pair<int,int>, int> p = {{1,3}, 4};
    count << p.first.first << " " << p.first.second << "" << p.second;


    pair<int, int>arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second;
}

{
    // extra:
    bool comp(pair<int,int>p1, pair<int,int>p2){
        if(p1.second < p2.second){
            return true;
        }else if(p1.second == p2.second){
            if(p1.first >p2.second) return true;
        }
        return false;
    }

}



#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}
