// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original number for printing

    // calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
