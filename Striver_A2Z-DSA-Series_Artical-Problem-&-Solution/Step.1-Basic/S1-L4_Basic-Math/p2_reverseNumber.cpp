//https://takeuforward.org/maths/reverse-digits-of-a-number

//https://takeuforward.org/maths/extract-digits-from-a-given-number

//https://leetcode.com/problems/reverse-integer/
/**
    Note:
    Problem Statement: Given an integer N return the reverse of the given number.
            Note: If a number has trailing zeros, then its
            reverse will not include them. For e.g ,
            reverse of 10400 will be 401 instead of 00401.

    Input: N = 12345
    Output:54321
    Explanation: The reverse of 12345 is 54321.

    Input: N = 7789
    Output: 9877
    Explanation: The reverse of number 7789 is 9877.


    Algo:
    We know that extracting digits of a number can be done by
    repeatedly taking modulo 10 and dividing by 10. Now,
    instead of just extracting digits, if we build a new
    number by appending these digits in reverse order,
    we effectively reverse the number.

    Each new digit becomes the least significant digit of
    the reversed number by multiplying the current reversed
    value by 10 before adding the digit.Each new digit becomes
    the least significant digit of the reversed number by
    multiplying the current reversed value by 10 before
    adding the digit.

        Initialize a variable to store the reversed num
        when N>0:
            extract last digit(initialize) of N by (%10)
            multiple revNum by 10 ad add last digit
            remove last digit fro original num by 10
        return rev num

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse digits of a number
    int reverseNumber(int n) {
        // Variable to store reversed number
        int revNum = 0;

        // Loop until all digits are processed
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Append it to the reversed number
            revNum = revNum * 10 + lastDigit;

            // Remove the last digit from n
            n = n / 10;
        }

        // Return the reversed number
        return revNum;
    }
};

/**
    TC: O(log₁₀N),The number of iterations in the loop depends
    on the number of digits in the number N. Since each digit
    is processed once using constant time operations (modulo,
    division, multiplication, and addition), the total time
    taken is proportional to the number of digits, which is log₁₀N.

    SC:O(1)
*/

// Driver code
int main() {
    Solution obj;
    int num = 12345;
    cout << obj.reverseNumber(num) << endl;  // Output: 54321
    return 0;
}

