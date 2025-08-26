// Write a program to input an integer and check whether it is even or odd using if–else

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using if–else
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
