//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers

//https://takeuforward.org/c/max-element-in-c-stl
/**
    Note:

    Problem: Given a vector find the maximum element of the vector.
        Input: arr = {3,1,9,5,2}
        Output: 9
        Explanation: 9 is the maximum element.

        Input: arr = {10,40,22,5,2}
        Output: 40
        Explanation: 40 is the maximum element.


    Syntax:
        *max_element(first index,last index);
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};

    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"The maximum element is: "<<*max_element(v.begin(),v.end());

}
