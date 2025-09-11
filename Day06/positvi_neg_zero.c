// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if–else to check the number
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}
