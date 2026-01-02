//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers

//https://takeuforward.org/c/unordered_map-in-c-stl
/**
    Note:
    unordered_map in STL are associative containers where
    each element consists of a key value and a mapped value.

    Two mapped values cannot have the same key value.
    The elements can be in any order.

        Syntax: unordered<datatype1,datatype2>_mapvariable_name;


    insert() - Used to insert an element in the unordered_map.

    begin() - Returns an iterator pointing to the first element in the map.

    end()
    Returns an iterator pointing to the theoretical element after the last element.

    clear()
    Deletes all the elements in the map.

    find()
    Searches for an element in the map and returns an iterator to it if found, otherwise returns end().

    erase()
    Deletes a single element by key or elements in a specified range using iterators.

    size()
    Returns the number of elements present in the map.

    empty()
    Checks if the map is empty or not.




    cbegin() – it refers to the first element of the unordered_map.
    cend() – it refers to the theoretical element after the last element of the unordered_map.
    rbegin() – it points to the last element of the unordered_map.

    rend() – it points to the theoretical element before the first element of the unordered_map.

    emplace() – to insert an element in the unordered_map.
    max_size() – the maximum elements a unordered_map can hold.
*/





#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare an unordered_map 'mp' with key and value both of type int
    unordered_map<int,int> mp;


    // Insert 5 key-value pairs into the unordered_map
    // Each key is i, and each value is i * 10
    for (int i = 1; i <= 5; i++) {
        mp.insert({ i , i * 10 });
    }

    // Display the elements present in the unordered_map
    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;


    // Iterate through the map and print each key-value pair
    // 'auto it' is an iterator pointing to each element
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;  // 'first' = key, 'second' = value
    }


    // Search for an element with key = 2
    int n = 2;
    if (mp.find(n) != mp.end()){  // mp.find(n) returns an iterator to the key if found, else mp.end()
        cout << n << " is present in map" << endl;
    }

    // Erase the first element in the map
    // Note: unordered_map does not maintain any order of elements
    mp.erase(mp.begin());


    // Display elements after deletion
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }

    // Print the current size of the map
    cout << "The size of the map is: " << mp.size() << endl;


    // Check whether the map is empty or not
    if (!mp.empty())  // mp.empty() returns true if the map has no elements
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;


    // Clear all elements from the map
    mp.clear();

    // Print size after clearing
    cout << "Size of the map after clearing all the elements: " << mp.size();
}
