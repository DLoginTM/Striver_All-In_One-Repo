//https://takeuforward.org/data-structure/check-if-a-number-is-prime-or-not


/**
    Note:

    Problem Statement:
    Given an integer N, check whether it is prime or not.
    A prime number is a number that is only divisible by 1
    and itself and the total number of divisors is 2.

    Example 1:
    Input:N = 2
    Output:True
    Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

    Example 2:
    Input:N =10
    Output: False
    Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.

    Just fun observation:
        if a num%2==0,(not prime)(even)
        and if num%2==1,(prime) (odd)

    Algo:
    We can iterate through numbers from 1 to n, counting how many
    of these numbers divide n without a remainder. If exactly
    two numbers do, so n is prime otherwise it is not prime.

        Initialise a variable cnt = 0 to store count

        for loop (1<=n)
            Check if n is divisible by i without any remainder.
            If it is, increment the counter variable by 1.

        after loop:
             if the number of divisors is equal to 2, return true
             indicating the number is prime.

        and base on that give true or false.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number is prime.
bool checkPrime(int n) {
    int cnt = 0;  // Initialize a counter variable to count the number of factors.

    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            cnt++;  // Increment the counter.
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime.
    if (cnt == 2) {
        return true;
    }
    // If the number of factors is not 2, it's not prime.
    else {
        return false;
    }
}

/**
    TC:O(N), as we iterate from 1 to N performing constant-time
    operation for each iteration.
    SC:O(1)
*/


int main() {
    int n = 1483;  // Example number
    bool isPrime = checkPrime(n);  // Function call to check if the number is prime

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}



/**
    ALgo----->Optimal
    We can optimise the algorithm by only iterating up to the
    square root of n when checking for factors. This is because
    if n has a factor greater than its square root, it must also
    have a factor smaller than its square root.


    //Remember: to solve this need to follow
    print divisiors chapter(p6.cpp file).
    This property is symmetric about the square root of n by
    traversing just the first half we can avoid redundant
    iteration and computations improving the efficiency of
    the algorithm. Discusses in detail here:Print All Divisiors

    Algo:
        Initialise a counter variable cnt to count the number
        of factors to 0.

        Begin a loop from 1 to the square root of n.
        This loop iterates through possible factors of n.
        For each value of i within the loop:

              if n is divisible by i without any remainder.

              If n is divisible by i, it means i is a factor of n,
              so increment the counter variable cnt by 1.

              Check if the reciprocal factor of i ie. n/i is
              not equal to i. If they are not equal, it means
              there is a distinct factor so increment cnt by 1 again.

        After loop, cnt contain total number of factors of n

        Check if the value of cnt is exactly 2, it means that
        n has exactly two distinct factors (1 and itself),
        indicating that it is a prime number.

              If the the number of factors is greater than 2
              then it is a composite number, return false.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to check if a given number is prime
bool checkPrime(int n) {
    int cnt = 0;  // Initialize a counter variable to count the number of factors

    // Loop through numbers from 1 to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;  // If n is divisible by i, increment the counter

            // If n is not a perfect square, count its reciprocal factor
            if (n / i != i) {
                cnt++;
            }
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime
    if (cnt == 2) {
        return true;
    } else {
        return false;  // If not, it's not a prime number
    }
}

/**
    TC: O(sqrt(N)), as The loop iterates up to the square root
    of n performing constant time operations at each step.
    SC:O(1)
*/


int main() {
    int n = 1483;  // Example number
    bool isPrime = checkPrime(n);  // Function call to check if the number is prime

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

