//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/multimap-in-c-stl
/**
    Note:
    multimap in STL are associative containers like maps where each
    element consists of a key value and a mapped value,

    the only difference is multimaps can store duplicate elements.


    insert() to insert an element in the multimap.
    begin() return an iterator pointing to the first element in the multimap.
    end() returns an iterator to the theoretical element after the last element.
    clear() deletes all the elements in the multimap.
    find() to search for an element in the map.
    erase() to delete a single element or elements between a particular range.
    size() returns the number of elements in the multimap.
    empty() to check if the multimap is empty or not.



    //------------------------------>
    cbegin() – it refers to the first element of the multimap.
    cend() – it refers to the theoretical element after the last element of the multimap.
    rbegin() – it points to the last element of the multimap.
    rend() – it points to the theoretical element before the first element of the multimap.
    emplace() – to insert an element in the multimap.
    max_size() – the maximum elements a multimap can hold.
*/



#include<bits/stdc++.h>
using namespace std;

int main() {
    multimap < int, int > mp;

    //Iterate in the map till 5
    for (int i = 1; i <= 5; i++) {
        //Insert elements from i to i*10
        mp.insert({i , i * 10});
    }

    mp.insert({4,40});
    cout << "Elements present in the multimap: " << endl;  //Print the elements in the map

    cout << "Key\tElement" << endl;  //Print the keys in the map
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;  //Print it.first and second from the map
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in multimap" << endl;  //If element in found

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;

    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the multimap is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The multimap is not empty " << endl;  //If map is not empty
    else
        cout << "The multimap is empty" << endl;  //If map is empty

    mp.clear();
    cout << "Size of the multimap after clearing all the elements: " << mp.size();  //Print the size of the map
}
