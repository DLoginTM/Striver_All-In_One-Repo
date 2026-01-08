//https://takeuforward.org/maths/check-if-a-number-is-armstrong-number-or-not

//https://leetcode.com/problems/armstrong-number/
/**
    Note:
    Problem Statement:Given an integer N,
    return true it is an Armstrong number otherwise return false.
            An Amrstrong number is a number that is equal to the
            sum of its own digits each raised to the power of the
            number of digits.

        Example 1:
        Input:N = 153
        Output:True
        Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

        Example 2:
        Input:N = 371
        Output: True
        Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371


        Algo:
        Calculate the number of digits in the input -> store in k
        sum var set to 0
        set and use n var to make copy of original input
        n>0:
            Get the last digit of n by using the modulus operator % with 10
            and store in ld

            digit ld raised to the power of k of the sum.

            Update n by integer division with 10 effectively
            removing the last digit.

            after loop
                check sum and original, and based on that give true or false.
*/

#include <bits/stdc++.h>
using namespace std;

// Class to check Armstrong number
class ArmstrongChecker {
public:
    // Static method to check if a number is an Armstrong number
    static bool isArmstrong(int num) {
        int k = to_string(num).length(); // Get number of digits
        int sum = 0;
        int n = num;

        while (n > 0) {
            int ld = n % 10;            // Get last digit
            sum += pow(ld, k);          // Add ld^k to sum
            n /= 10;                    // Remove last digit
        }

        return sum == num; // Return true if sum equals original number
    }
};

/**
    TC:O(log10N + 1) where N is the input number.
    The time complexity is determined by the number of digits
    in the input integer N. In the worst case when N is a
    multiple of 10 the number of digits in N is log10 N + 1.
    SC:O(1)
*/


int main() {
    int number = 153;

    // Use class method to check
    if (ArmstrongChecker::isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

