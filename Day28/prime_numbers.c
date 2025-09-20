/*Write a program to print all the prime numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume i is prime

        // Check divisibility
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
