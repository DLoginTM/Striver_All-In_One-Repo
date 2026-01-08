//https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not

//https://takeuforward.org/maths/extract-digits-from-a-given-number
//https://leetcode.com/problems/palindrome-number/

/**
    Note:
    Problem Statement: Given an integer N, return true if it
    is a palindrome else return false.
        A palindrome is a number that reads the same backward
        as forward.

    Algo:
    for palindrom, we can use the algorithm created in Extract
    Digits as now we extract the digits of the number to create
    a reversed number.

            Initialise an integer revNum to 0
            make duplicate of original N
            when N>0
                Get the last digit of n by using the modulus
                operator % with 10 and store it in a temporary
                variable ld.

                Get the last digit of n by using the modulus
                operator % with 10 and store it in a temporary
                variable ld.

                Update n by integer division with 10 effectively
                removing the last digit.

                then check dpulicate and original and based on that
                give yes or no as answer

*/


#include <iostream>
using namespace std;

// Function to check if a given integer is a palindrome
bool palindrome(int n) {
    int revNum = 0; // Initialize a variable to store the reverse of the number
    int dup = n; // Create a duplicate variable to store the original number

    // Iterate through each digit of the number until it becomes 0
    while (n > 0) {
        int ld = n % 10; // Extract the last digit of the number
        revNum = (revNum * 10) + ld; // Build the reverse number by appending the last digit
        n = n / 10; // Remove the last digit from the original number
    }

    // Check if the original number is equal to its reverse
    if (dup == revNum) {
        return true; // If equal, return true indicating it's a palindrome
    } else {
        return false; // If not equal, return false indicating it's not a palindrome
    }
}


/**
    TC:O(log10N + 1), as in the worst case when N is a multiple
    of 10 the number of digits in N is log10 N + 1. In the while
    loop we divide N by 10 until it becomes 0 which takes log10N
    iterations.
    SC:O(1)
*/

int main() {
    int number = 4554; // Example number

    if (palindrome(number)) { // Check if the number is a palindrome
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
