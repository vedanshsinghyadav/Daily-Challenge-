// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original number for printing

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reverse of %d is %d\n", original, reversed);

    return 0;
}
