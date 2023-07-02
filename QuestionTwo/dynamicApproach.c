// BDD:

// Feature: Piecewise Dynamic Fibonacci Sequence Calculation

// Scenario: Calculate Fibonacci sequence using piecewise dynamic approach

// Given a positive integer n
// When the piecewiseDynamic function is called with n
// Then the function should return the Fibonacci number F(n)

// Pseudocode:
// function piecewiseDynamic(n)
//     if n is 0
//         return 0
//     else if n is 1
//         return 1
//     else if n is 2
//         return 2

//     create an array dp of size n + 1
//     dp[0] = 0
//     dp[1] = 1
//     dp[2] = 2

//     for i = 3 to n
//         dp[i] = dp[i - 3] + dp[i - 2]

//     return dp[n]

// function main()
//     n = 10 // Example value, you can change it as per your requirement
//     result = piecewiseDynamic(n)
//     print "F(", n, ") = ", result

// main()


#include <stdio.h>

int piecewiseDynamic(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 10; // Example value, you can change it as per your requirement
    int result = piecewiseDynamic(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
