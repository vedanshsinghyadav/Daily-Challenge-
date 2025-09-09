// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // input n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // calculate sum of first n odd numbers
    for (i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
