#include <stdio.h>

int piecewiseIterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2, i, temp;
    for (i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}

int main() {
    int n = 10; // Example value, you can change it as per your requirement
    int result = piecewiseIterative(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
