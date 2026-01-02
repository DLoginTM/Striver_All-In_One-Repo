//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/set-in-c-stl
/**
    Note
    A set in STL is a container that stores unique elements
    in a particular order. Every operation on a set takes O(1)
    complexity in the average case and takes O(n) in the worst case.

    insert() – to insert an element in the set.
            set<int> s;
            s.insert(1);
            s.insert(2);

    begin() – return an iterator pointing to the first element in the set.
            s.begin();

    end() – returns an iterator to the theoretical element after the last element.
            s.end();

    count() – returns true or false based on whether the element is present in the set or not.
            set<int> s;
            s.insert(1);
            s.insert(2);
            s.count(2); //returns true

    clear() – deletes all the elements in the set.
            s.clear();

    find() – to search an element in the set.
            set<int> s;
            s.insert(1);
            s.insert(2);

            if(s.find(2)!=s.end())
                cout<<"true"<<endl;

    erase() – to delete a single element or elements between a particular range.
            s.erase();

    size() – returns the size of the set.
            s.size();

    empty() – to check if the set is empty or not.
            s.empty();

    cbegin() – it refers to the first element of the set.
    cend() – it refers to the theoretical element after the last element of the set.
    rbegin() – it points to the last element of the set.
    rend() – it points to the theoretical element before the first element of the set.

    bucket_size() – gives the total number of elements present in a specific bucket in a set.
    emplace() – to insert an element in the set.
    max_size() – the maximum elements a set can hold.
    max_bucket_count() – to check the maximum number of buckets a set can hold.

*/


#include<bits/stdc++.h>

using namespace std;

int main() {
  set < int > s;

  //Iterate through 10 and insert the value of i in the set
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " "; //If element is found print it
  }

  /**
        //m1
        cout << "Elements present in the set: ";
        for (int x : s) {
            cout << x << " ";
        }

        //m2
        //for_each() + lambda (STL algorithm)
        for_each(s.begin(), s.end(), [](int x) {
            cout << x << " ";
        });


        //m3
        vector<int> v(s.begin(), s.end());
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }

  */
  cout << endl;

  int n = 2;
  if (s.find(2) != s.end())
    //Print the element
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  //  s.erase(prev(s.end()));
  //Convert reverse_iterator → iterator
  s.erase(next(s.rbegin()).base());
  cout << "Elements after deleting the last element: ";
  for (int x: s) {
    cout << x << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl; ///Return the size of the set

  if (s.empty() == false)
    cout << "The set is not empty " << endl; //If set is not empty and elements are still present in it
  else
    cout << "The set is empty" << endl; //If set is empty
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();

}
