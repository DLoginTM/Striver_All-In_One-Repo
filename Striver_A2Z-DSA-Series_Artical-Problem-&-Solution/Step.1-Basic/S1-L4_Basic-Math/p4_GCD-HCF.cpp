//https://takeuforward.org/data-structure/find-gcd-of-two-numbers

//------>this is only based on GCd not HCF(mention here).
/**
    Note:

    Problem Statement:
    Given two integers N1 and N2, find their greatest common divisor.


        Example 1:
        Input: N1 = 9, N2 = 12

        Output: 3
        Explanation:
        Factors of 9: 1, 3, 9
        Factors of 12: 1, 2, 3, 4, 6, 12
        Common Factors: 1, 3
        Greatest common factor: 3 (GCD)

        Example 2:
        Input: N1 = 20, N2 = 15

        Output: 5
        Explanation:
        Factors of 20: 1, 2, 4, 5, 10, 20
        Factors of 15: 1, 3, 5, 15
        Common Factors: 1, 5
        Greatest common factor: 5 (GCD)



    Algo: Brute-Force
    //Intuition:
    The GCD of two numbers is the largest number that divides
    both of them without leaving a remainder. We iterate through
    all numbers from 1 up to the minimum of the two input numbers,
    checking if each number is a common factor of both input numbers.

    If a number is a common factor, we update our gcd variable
    to that number. This process continues until we have iterated
    through all possible common factors. Finally, we return the
    gcd variable, which will hold the greatest common divisor
    of the two input numbers.


    Algo:
         Initialise a variable gcd to 1. This variable will
         store the greatest common divisor of the input
         numbers n1 and n2.

        Iterate from 1 to the minimum of n1 and n2.
             start from 1 because the GCD of any two numbers
             is at least 1, and it cannot be greater than the
             smaller of the two numbers.

        At each iteration, if i is a common factor of both
        n1 and n2 update the gcd variable to i

        After the iteration, the gcd variable will store the greatest
        common divisor of n1 and n2 and return that value.
*/


#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int n1, int n2) {
    // Initialize gcd to 1
    int gcd = 1;

    // Iterate from 1 up to
    // the minimum of n1 and n2
    for(int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // Update gcd to the
            // current common factor i
            gcd = i;
        }
    }

    // Return the greatest
    // common divisor (gcd)
    return gcd;
}

/**
    TC:O(min(N1, N2)) where N1 and N2 is the input number.
    The algorithm iterates from 1 to the minimum of N1 and N2
    and each iteration checks whether both the numbers are
    divisible by the current number (constant time operations).
    SC:O(1)
*/

int main() {
    int n1 = 20, n2 = 15;

    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}




/**
    //------------>Algo:Better
    Intuition:
    We can optimise the time complexity of the previous approach.
    In the worst case, the loop iterates from 1 up to the minimum
    of N1 and N2. This could potentially result in a large number
    of iterations, especially when one input number is significantly
    larger than the other.

    If we iterate from the minimum of N1 and N2 down to 1,
    we reduce the number of iterations because we start
    from the potentially largest common factor and work downwards.

    The time complexity of this approach remains O(min(N1, N2))
    but in practice, it will execute fewer iterations on average.



    Algo:
        Iterate from the minimum of n1 and n2 because the
        greatest common divisor of two numbers cannot exceed
        the smaller number.

        For each i in the iteration, we check if it is a
        common factor of both n1 and n2.
            If a common factor i is found, we return it as the
            gcd as we are iterating from the largest potential
            gcd to 1, the first common factor we encounter will
            be the greatest common divisor.

        If the loop completes without finding any common factors
        we return 1. This is because 1 is always a divisor of
        any number
*/

#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int n1, int n2) {
    // Iterate from the minimum of
    // n1 and n2 down to 1
    // Start from the minimum of n1 and n2
    // because the GCD cannot
    // exceed the smaller number

    for(int i = min(n1, n2); i > 0; i--) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
}

/**
    TC:O(min(N1, N2)) where N1 and N2 is the input number.
    The algorithm iterates from the minimum of N1 and N2 to
    1 and each iteration checks whether both the numbers
    are divisible by the current number (constant time operations).
    SC:O(1)
*/


int main() {
    int n1 = 20, n2 = 15;

    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}





/**
    //------------>Algo(Optimal)

    //Euclidean Algo:
    It operates on the principle that the GCD of two numbers remains
    the same even if the smaller number is subtracted from the larger number.

    To find the GCD of n1 and n2 where n1 > n2:
        Repeatedly subtract the smaller number from
        the larger number until one of them becomes 0.

        Once one becomes 0, the other is the GCD of
        the original numbers.

    Example:
    n1 = 20, n2 = 15

    gcd(20, 15) = gcd(20 - 15, 15) = gcd(5, 15)
    gcd(5, 15)  = gcd(15 - 5, 5)  = gcd(10, 5)
    gcd(10, 5)  = gcd(10 - 5, 5) = gcd(5, 5)
    gcd(5, 5)   = gcd(5 - 5, 5)  = gcd(0, 5)

    Hence, return 5 as the GCD.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

/**
    TC: O(min(N1, N2)) where N1 and N2 is the input number.
    The algorithm iterates from the minimum of N1 and N2 to
    1 and each iteration checks whether both the numbers are
    divisible by the current number (constant time operations).
    SC:O(1).
*/


int main() {
    int n1 = 20, n2 = 15;

    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}


