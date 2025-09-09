// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1; // use long long for large product
    int hasOdd = 0; // flag to check if there is any odd digit

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original number

    // process digits
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { // odd digit
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d = %lld\n", original, product);
    } else {
        printf("No odd digits in %d\n", original);
    }

    return 0;
}
