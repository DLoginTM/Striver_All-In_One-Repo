//https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers


//https://takeuforward.org/c/sort-in-c-stl
/**
    Note:

    No need to worry about time complexity –
    it is one of the most efficient functions with a N*logN
    time complexity and uses a mix of quicksort and mergesort
    in its internal implementation.


    Syntax:
        sort(begin, end)

    begin: An iterator pointing to the first element of a container.
    end: An iterator pointing to the element just after the last
    element of the container.
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/**
int main() {
//    int arr[] = {4,2,1};
//    sort(arr, arr+3);  //Sort from arr to arr+3
//    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
//    Output: 1 2 4
    return 0;
}
*/


/**
int main(){
    vector<int> vec = {4,2,1};
    sort(vec.begin(), vec.end());  //Sort the vector
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
}
*/




/**
    //Can we also sort a container in descending order using sort()?

    Yes, by using comparators.
    comparator is to compare two elements before performing
    an operation.

    In STL, we already have a comparator defined to do this which
    is called greater().

    We just need to pass greater<container_data_type>() as the
    third parameter to sort function
*/
    /**
    int main() {
        int arr[] = {4,2,1};
        //Sort from arr to arr+3 elements only
        // Sort only first 3 elements (here only 3 element present)
        sort(arr, arr+3, greater<int>());
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

        vector<int> vec1 = {5,3,1};
        sort(vec1.begin(), vec1.end(), greater<int>());  //Sort the elements
        cout<<vec1[0]<<" "<<vec1[1]<<" "<<vec1[2];


        return 0;
    }
    */



//------------->Very very Important context:
/**
    Can we also sort the container in a custom order –
    defined by a custom comparator?

        Yes, we can. We can write a custom comparator to compare
        between any two elements as we wish, and it can then be
        used to sort the entire container accordingly.



    But wait, isn't sorting just of two types – ascending
    and descending? Why do we need a custom sorting algorithm?
        Before we answer that, can you think of using the sort()
        function with a vector of pairs where the vector needs
        to be sorted according to the second element of all pairs?
        Or say an array of structures?

        Answer: This is where we need comparators – to sort custom
        data types defined by users based on custom parameters.



    //-------->Understand:
    Let's understand this by the example of a vector of pairs
    where the vector needs to be sorted in ascending order of
    the second element of all pairs.

    Below is a valid comparator for this:
        The above function accepts two pairs "a" and "b", and
        returns true if the second element of the first pair
        is smaller than the second element of the second pair;
        otherwise, it returns false.
*/

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) {
    return (a.second < b.second);
}

int main() {
    vector<pair<int, int> > vec = {{10,3}, {20, 1}, {30, 2}};

    sort(vec.begin(), vec.end(), sortbysec);
    for(int i=0; i<3; i++) {
        //print the vec[i].first and then the vec[i].second
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
    return 0;
}
