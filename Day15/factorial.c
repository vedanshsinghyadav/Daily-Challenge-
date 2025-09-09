// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // long long for large factorials

    // input number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
