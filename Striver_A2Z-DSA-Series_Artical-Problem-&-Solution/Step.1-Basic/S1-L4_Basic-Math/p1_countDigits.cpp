//https://takeuforward.org/data-structure/count-digits-in-a-number

//extract-digit: https://takeuforward.org/maths/extract-digits-from-a-given-number
/**
    Note:

    Problem Statement:
    Given an integer N, return the number of digits in N.
        Example 1:
        Input:N = 12345
        Output:5
        Explanation:  The number 12345 has 5 digits.

        Example 2:
        Input:N = 7789
        Output: 4
        Explanation: The number 7789 has 4 digits.

    //------------------>Brute-force:
    algo: (mainly do, n%10)
    we are simply creating a counter to count the number
    of digits in the number.
            Initialise a counter
            when N>0
                counter++
                update N by last digit(n%10)
            return couter
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Function to count the number of digits in an integer 'n'.
int countDigits(int n){
    // Initialize a counter variable 'cnt' to store the count of digits.
    int cnt = 0;
    // While loop iterates until 'n' becomes 0 (no more digits left).
    while(n > 0){
        // Increment the counter for each digit encountered.
        cnt = cnt + 1;
        // Divide 'n' by 10 to remove the last digit.
        n = n / 10;
    }
    // Return the count of digits.
    return cnt;
}
/**
    TC:O(log10N + 1)
        where N is the input number.
        The time complexity is determined by the number
        of digits in the input integer N. In the worst
        case when N is a multiple of 10 the number of
        digits in N is log10N + 1.
    SC:O(1)

*/


int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}


/**
    Note:
    //------------------>Optimal:
    algo:
    The logarithmic base 10 of a positive integers gives
    the number of digits in n.
    We add 1 to the result to ensure that the count
    is correct even for numbers that are powers of 10.

    The count of digits can be calculated using log10 N + 1.
        log10 N operation gives the logarithmic base 10 of
        which returns the power to which 10 must be raised to,
        to be equal to N.

        We add 1 to the result which accounts for
        the possibility that N itself is a power of 10.
*/


#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


// Calculate the count of digits in 'n'
// using logarithmic operation log10(n) + 1.
int countDigits(int n){
    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.

    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.

    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.

    // Return the count of digits in 'n'.
    return cnt;
}

/**
    TC: O(1), as simple arithmetic operations in
    constant time are computed on integers.
    SC:O(1)
*/


int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}

