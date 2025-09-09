// Write a program to find the 1's complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary;
    long long original;
    long long onesComplement = 0;
    long long place = 1;
    int digit;

    // input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary;

    // process each digit
    while (binary != 0) {
        digit = binary % 10;
        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("Invalid binary number!\n");
            return 1;
        }

        onesComplement = onesComplement + digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement of %lld = %lld\n", original, onesComplement);

    return 0;
}
