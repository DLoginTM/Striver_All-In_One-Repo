//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containershttps://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/multiset-in-c-stl
/**
    Note:
    A multiset in STL is an associative container similar to a set,
    but it allows duplicate elements.

        Syntax - multiset<object_type> variable_name;
            multiset<int> s;
            multiset<string> str;

    1. insert()  to insert an element
        multiset<int> s;
        s.insert(1);
        s.insert(2);

    2. begin()  returns iterator to first element
        s.begin();
    3. end()  returns iterator after last element
        s.end();


    4. count()  count occurrences of an element
        multiset<int> s;
        s.insert(1);
        s.insert(2);
        s.count(2); // returns 1(True)

    5. clear()  deletes all elements
        s.clear();

    6. find()  search an element
        multiset<int> s;
        s.insert(1);
        s.insert(2);
        if (s.find(2) != s.end())
            cout << "true" << endl;

    7. erase()  delete a single element or range
        s.erase();
    8. size()  returns number of elements
        s.size();
    9. empty()  checks if multiset is empty
        s.empty();



    cbegin()  returns constant iterator to first element
    cend()  returns constant iterator after last element
    rbegin()  returns reverse iterator to last element

    rend()  returns reverse iterator before first element

    emplace()  insert an element efficiently
    max_size()  returns maximum number of elements a multiset can hold

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    // Declare a multiset of integers
    multiset<int> s;


    // Insert elements 1 to 10
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Insert a duplicate element
    s.insert(5);

    // Display elements in the multiset (ordered automatically)
    cout << "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Search for a specific element (2 in this case)
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in multiset" << endl;


    // Erase the first element
    s.erase(s.begin());

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;


    // Display the size of the multiset
    cout << "The size of the multiset is: " << s.size() << endl;

    // Check if the multiset is empty
    if (!s.empty())
        cout << "The multiset is not empty" << endl;
    else
        cout << "The multiset is empty" << endl;

    // Clear all elements
    s.clear();

    // Display size after clearing
    cout << "Size of the multiset after clearing: " << s.size();

}
