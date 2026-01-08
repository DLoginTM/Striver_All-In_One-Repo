// Container - Map
/**
    Note:

*/


//Map
void explainMap(){
    map <int, int> mpp;
    map<int, pair<int, int>>mpp; // format:{1, {2,4}}
    map<pair<int, int>, int>mpp; // format:{{1, 2}, 3}


    mpp[1] = 2;
    mpp.emplace({3,1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10
//    {
//        {1, 2}
//        {2, 4}
//        {3, 1}
//    }


    for(auto it:mpp){
        cout<<it.first <<" "<<it.second << endl;
    }

    cout<<mpp[1]; // return, value (cause, mpp[1] is key)
    cout<<mpp[5]; // return, value (cause, mpp[1] is key)

    auto it = mpp.find(3);
    cout <<*(it).second; // return value of key-pair value

    auto it = mpp.find(5);

    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above.
}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}








