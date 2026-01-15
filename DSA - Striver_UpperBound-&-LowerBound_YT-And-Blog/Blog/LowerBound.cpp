// https://takeuforward.org/arrays/implement-lower-bound-bs-2

/**
    Note:

    Problem Statement: Given a sorted array of
    N integers and an integer x, write a program to
    find the lower bound of x.


    1. The lower bound algorithm finds the first or the smallest
    index in a sorted array where the value at that index is greater
    than or equal to a given key i.e. x.

    2. The lower bound is the smallest index, ind,
    where arr[ind] >= x. But if any such index is not found,
    the lower bound algorithm returns n i.e. size of the given array.


        Example 1:
        Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
        Result: 1
        Explanation: Index 1 is the smallest index such that arr[1] >= x.

        Example 2:
        Input Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
        Result: 3
        Explanation: Index 3 is the smallest index such that arr[3] >= x.
*/

#include <bits/stdc++.h>
using namespace std;

//------------------->Method-1: brute force:
/**
    Note:
    Algo:
    using linear search,
        1.With the knowledge that the array is sorted,
        our approach involves traversing the array starting
        from the beginning.

        2.During this traversal, each element will be
        compared with the target value, x

        3.index, i, where the condition arr[i] >= x is
        first satisfied, will be the answer

*/

// Class containing methods for array operations
class LowerBoundFinder {
public:
    // Function to find lower bound index
    int lowerBound(vector<int> arr, int n, int x) {
        // Traverse the array
        for (int i = 0; i < n; i++) {
            // If current element is greater than or equal to x
            if (arr[i] >= x) {
                return i;  // Return index of the first such element
            }
        }
        // If all elements are smaller than x
        return n;
    }
};

/**
    TC:O(N), where N= size of an array.
    SC:O(1)
*/


int main() {
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = arr.size();  // Size of the array
    int x = 9;           // Target value

    LowerBoundFinder finder;                  // Create object
    int ind = finder.lowerBound(arr, n, x);   // Find lower bound index

    cout << "The lower bound is the index: " << ind << "\n";

    return 0;
}




//------------------->Method-2: Optimal:
/**
    Note:
    Algo:
    As the array is sorted,
        we will apply the Binary Search algorithm
        to find the index. and remember (as If we don’t
        find any index, we will return n).

        1. place 2 pointer : low and high
        2. find mid
        3. compare mid, arr[mid] with x:

            Case 1 - If arr[mid] >= x
            index mid may be an answer, So, we will update the
            ‘ans’ variable with mid and search in the left half
            if there is any smaller index that satisfies the
            same condition. Here, we are eliminating the right half.

            Case 2 - If arr[mid] < x:
            mid cannot be our answer and we need to find some
            bigger element. So, we will eliminate the left half
            and search in the right half for the answer.
*/

// Class to find the lower bound index in an array
class LowerBoundFinder {
public:
    // Function to find the lower bound using binary search
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0;           // Start of search range
        int high = n - 1;      // End of search range
        int ans = n;           // Default to n (not found)

        // Binary search loop
        while (low <= high) {
            int mid = (low + high) / 2;  // Middle index

            if (arr[mid] >= x) {
                ans = mid;           // Store possible answer
                high = mid - 1;      // Try to find smaller index on left side
            } else {
                low = mid + 1;       // Move right if current element is less than x
            }
        }
        return ans;  // Return the index of the lower bound
    }
};
/**
    TC:O(LogN), used typical binary search.
    SC:O(1)
*/


int main() {
    vector<int> arr = {3, 5, 8, 15, 19};  // Sorted input array
    int n = arr.size();                  // Size of array
    int x = 9;                           // Target value

    LowerBoundFinder finder;            // Create object of the class
    int ind = finder.lowerBound(arr, n, x);  // Call method to find lower bound

    cout << "The lower bound is the index: " << ind << "\n";  // Output the result
    return 0;
}
