// Write a program to find and display the sum of the first n natural numbers

#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Formula for sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // Display result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
