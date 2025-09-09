// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf, lcm;

    // input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // calculate HCF using Euclidean algorithm
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    hcf = tempA;

    // calculate LCM using formula: LCM = (a*b)/HCF
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

