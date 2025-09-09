// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // assuming 32-bit integer
    int index = 0;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int original = num; // store original number for printing

    // convert to binary
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    // print binary in reverse order
    printf("Binary of %d: ", original);
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
