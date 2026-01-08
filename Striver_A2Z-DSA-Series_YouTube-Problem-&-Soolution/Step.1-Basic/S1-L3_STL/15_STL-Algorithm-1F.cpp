// STL - Algorithm
/**
    Note:
*/


//STL - Algo
void explainExtra(){

    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>); // comparitor



    pair<int,int>a[] = {{1,2}, {2,1}, {4,1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
    bool comp(pair<int,int>p1, pair<int,int>p2){
        if(p1.second < p2.second){
            return true;
        }else if(p1.second == p2.second){
            if(p1.first >p2.second) return true;
        }
        return false;
    }
    sort(a, a+n,comp);
    //Answer: {{4,1}, {2,1}, {1,2}};

    int num = 7;
    int cnt = __builtin_popcount(); // find setbits for integer

    long long num = 165786578687;
    int cnt = __builtin_popcountll();// find setbits for Long Long


    string s = "123";
    //at sor first
    sort(s.begin(), s.end());

    do{
        cout << s <<endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n);

}


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    return 0;
}











