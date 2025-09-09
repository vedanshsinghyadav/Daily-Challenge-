// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // check palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
