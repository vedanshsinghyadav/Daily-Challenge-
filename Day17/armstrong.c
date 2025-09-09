// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    int sum = 0;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count number of digits
    int temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;

    // calculate sum of digits raised to power n
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // check Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
