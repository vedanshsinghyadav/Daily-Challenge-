// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    // input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    hcf = tempA;

    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);

    return 0;
}

