/*
   Ques: Write a program in C to swap the first and last digit of a number.
*/

#include <stdio.h>

int main() {
    int num, first, last, middle, swapped, temp, pow10 = 1, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    // find power of 10^(digits-1)
    for(int i = 1; i < digits; i++) {
        pow10 *= 10;
    }

    // first and last
    first = num / pow10;
    last = num % 10;

    // middle part (remove first and last)
    middle = (num % pow10) / 10;

    // construct swapped number
    swapped = last * pow10 + middle * 10 + first;

    printf("After swapping first and last digit: %d\n", swapped);

    return 0;
}
