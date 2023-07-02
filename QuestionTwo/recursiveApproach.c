#include <stdio.h>

int piecewiseRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return piecewiseRecursive(n - 3) + piecewiseRecursive(n - 2);
}

int main() {
    // Example value, you can change it as per your requirement
    int n = 10; 
    int result = piecewiseRecursive(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
