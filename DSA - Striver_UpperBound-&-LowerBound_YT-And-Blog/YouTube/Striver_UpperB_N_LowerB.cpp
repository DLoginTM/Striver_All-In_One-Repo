/**
    concept learned from this lecture:
    Binary Search with C++ STL | 4 Problems followed up | Lower Bound and Upper Bound explained
    https://www.youtube.com/watch?v=edJ19qIL8WQ
*/


/**

    Note:

    1. upper_Bound and Lower_bound, works on LogN


        Binary Search:
    Main question
    Q1. Check if X exists in the sorted array  or not?

*/

// Binary search in STL:
int main(){
    a[] = {1,4,5,8,9};

    bool res = binary_search(a, a+n, 3);
    //((a, a+n, 3); , here a =  iterator and it points
    // a[] = {1,....} and a+n = another iterator and it
    //points a[] = {....,9}.

    // return false, cause 3 does not exists.


    bool res = binary_search(a, a+n, 4);
    // return true, cause 4 does exists.
}


/**
    Note:
    Lower_Bound Function:

    int main(){
        a[] = {1,4,5,6,9,9};

        int ind = lower_bound(a, a+n, 4) - a;
        // here, it get to the array [] = {1,4,...}
        check weather 4 occurs or not. her it occure
        so, it will return a iterator pointing to this position
        here '1'.


        int ind = lower_bound(a, a+n, 7) - a;
        //here, saeme as previous.
        check  7 present or not, here it not so it points imediately
        next greater element, here that is '9'
        index = '4'

        int ind = lower_bound(a, a+n, 10) - a;
        hhere, array end eith = {....,9} and nothing greater
        present which bigger than 10, so it points "end"-iterator
        index = '6', cause 0 to 5 holde the array ={1,4,..,9,9}

        // lower bound return iterator.
        // but we can access index using '-a',


        //so, we can say lower_bound is that stl which returns the 1st
        occurrence of the element if it occurrce and if it does not
        occurs then it will return iterator pointing to the element
        which is immediate next greaeter of the given element.

        //vector syntax:
        int ind = lower_bound(a.begin(), a.end(), a) - a.begin();
    }

*/

int main(){
    a[] = {1,4,5,6,9,9};

    int ind = lower_bound(a, a+n, 4) - a;
    int ind = lower_bound(a, a+n, 7) - a;
    int ind = lower_bound(a, a+n, 10) - a;
}





/**
    Note:
    Upper_Bound Function:

    int main(){
        a[] = {1,4,5,6,9,9};

        int ind = upper_bound(a, a+n, 4) - a;
        // so, if you want to search 4(here, 4),
        upper_bound(), never return iterator pointing
        to that element, it will always return iterator
        which point greater elemenet than 4 (here it will 5).

        int ind = upper_bound(a, a+n, 7) - a;
        //same as previous upper_bound for 7, return 9

        int ind = upper_bound(a, a+n, 10) - a;
        //same as previous upper_bound for 10, return end()-iterator.


        //vector syntax:
        int ind = upper_bound(a.begin(), a.end(), a) - a.begin();
    }

*/

int main(){
    a[] = {1,4,5,6,9,9};

    int ind = upper_bound(a, a+n, 4) - a;
    int ind = upper_bound(a, a+n, 7) - a;
    int ind = upper_bound(a, a+n, 10) - a;
}







/**

    Main question
    Q1. Find the first occurrence of a X in a
    sorted array. If it does not exists print -1.

    int main(){
        A[] = {1,4,4,4,4,9,9,10,11}

        int ind = lower_Bound(a, a+n, X) - a;
        if(ind != n && a[ind]==X)
            cout << ind;
        else
            cout << -1;


        //test case:
        //X = 4 // 1
        //X = 2 // -1
        //X = 12 // -1
    }

    //------------------------------------------------>

    Main question
    Q2. Find the last occurrence of a X in a
    sorted array. If it does not exists print -1.

    int main(){
        A[] = {1,4,4,4,4,9,9,10,11}

        int ind = upper_Bound(a, a+n, X) - a;
        ind--;

        if(ind >=0 && a[ind]==X)
            cout << ind;
        else
            cout << -1;


        //test case:
        //X = 4 // 4
        //X = 2 // -1
        //X = 0 // -1
    }


    //------------------------------------------------>

    Main question
    Q3. Find the largest number smaller than X in
    a sorted array. If no number exists print -1.

    int main(){
        A[] = {1,4,4,4,4,9,9,10,11}

        int ind = lower_Bound(a, a+n, X) - a;
        ind--;

        if(ind >=0)
            cout << a[ind];
        else
            cout << -1;


        //test case:
        //X = 4 // 1
        //X = 2 // 1
        //X = 1 // -1
    }


    //------------------------------------------------>

    Main question
    Q4. Find the smallest number greater than X in
    a sorted array. If no number exists print -1.

    int main(){
        A[] = {1,4,4,4,4,9,9,10,11}

        int ind = upper_Bound(a, a+n, X) - a;

        if(ind<n)
            cout << a[ind];
        else
            cout << -1;


        //test case:
        //X = 4 // 9
        //X = 2 // 4
        //X = 1 // 4
    }
*/
