// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long for large product

    // input n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
