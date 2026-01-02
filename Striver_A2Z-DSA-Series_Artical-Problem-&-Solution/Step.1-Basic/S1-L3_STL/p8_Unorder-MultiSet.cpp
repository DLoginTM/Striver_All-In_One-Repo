//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/unordered-multiset-in-c-stl
/**
    Note:
    An unordered_multiset in STL is an associative container just
    like an unordered set the only difference is it can store
    duplicate elements in it.



    insert() - Used to insert an element in the unordered_multiset.

    begin() - Returns an iterator pointing to the first element in the unordered_multiset.

    end()
    Returns an iterator pointing to the theoretical element after the last element.

    count()
    Returns the count of a particular element in the unordered_multiset.

    clear()
    Deletes all the elements in the unordered_multiset.

    find()
    Searches for an element in the unordered_multiset and returns an iterator to it if found, otherwise returns end().

    erase()
    Deletes a single element or elements between a specified range.

    size()
    Returns the number of elements present in the unordered_multiset.

    empty()
    Checks if the unordered_multiset is empty or not.




    cbegin() – it refers to the first element of the unordered multiset.
    cend() – it refers to the theoretical element after the last element of the unordered multiset.
    rbegin() – it points to the last element of the unordered multiset.
    rend() – it points to the theoretical element before the first element of the unordered multiset.

    emplace() – to insert an element in the unordered multiset.
    max_size() – the maximum elements an unordered multiset can hold.
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare an unordered_multiset of integers
    unordered_multiset<int> s;

    // Insert elements from 1 to 10 into the unordered_multiset
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Insert an additional 5 to demonstrate duplicate storage
    s.insert(5);

    // Display all elements of the unordered_multiset
    cout << "Elements present in the unordered multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) { // Iterate over each element
        cout << *it << " "; // Dereference iterator to get the value
    }
    cout << endl;

    int n = 2;
    // Check if element '2' is present using find()
    if (s.find(2) != s.end())
        cout << n << " is present in unordered multiset" << endl;

    // Erase the first element using iterator
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the size of the unordered_multiset
    cout << "The size of the unordered multiset is: " << s.size() << endl;

    // Check if the unordered_multiset is empty
    if (s.empty() == false)
        cout << "The unordered multiset is not empty " << endl;
    else
        cout << "The unordered multiset is empty" << endl;

    // Clear all elements from the unordered_multiset
    s.clear();
    cout << "Size of the unordered multiset after clearing all the elements: " << s.size();
}

