//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/unordered_multimap-in-c-stl
/**
    Note:
    unordered_multimap in STL are associative containers
    like unordered maps where each element consists of a
    key value and a mapped value,

    the only difference is unordered multimaps can
    store duplicate elements.


    Syntax: unordered_multimap<object_type,object_type> variable_name;
        unordered_multimap<int,int> mpp;
        unordered_multimap<string,int> mpp;


    insert() – to insert an element in the unordered multimap.
        unordered_multimap<int,int> mp;
        mp.insert({1,10});
        mp.insert({2,20});


    begin() – return an iterator pointing to the first element in the unordered multimap.
        mp.begin();
    end() – returns an iterator to the theoretical element after the last element.
        mp.end();
    clear() – deletes all the elements in the unordered multimap.
        mp.clear();


    find() – to search for an element in the unordered map.
        unordered_multimap<int,int> mp;
        mp.insert({1,10});
        mp.insert({2,20});
        if(mp.find(2)!=mp.end())
            cout<<"true"<<endl;


    erase() – to delete a single element or elements between a particular range.
        mp.erase(key);
        mp.erase(iterator position);
        mp.erase(iterator position 1, iterator position 2);


    size() – returns the number of elements on the unordered multimap.
        mp.size();
    empty() – to check if the unordered multimap is empty or not.
        mp.empty();



    cbegin() – it refers to the first element of the unordered multimap.
    cend() – it refers to the theoretical element after the last element of the unordered multimap.
    rbegin() – it points to the last element of the unordered multimap.

    rend() – it points to the theoretical element before the first element of the unordered multimap.

    emplace() – to insert an element in the unordered multimap.
    max_size() – the maximum elements an unordered multimap can hold.
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multimap < int, int > mp;

    for (int i = 1; i <= 5; i++) {
        mp.insert({i , i * 10});
    }
    mp.insert({4,40});


    cout << "Elements present in the unordered multimap: " << endl;
    cout << "Key\tElement" << endl;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }


    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in unordered multimap" << endl;


    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the unordered multimap is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The unordered multimap is not empty " << endl;
    else
        cout << "The unordered multimap is empty" << endl;

    mp.clear();
    cout << "Size of the unordered multimap after clearing all the elements: " << mp.size();
}
