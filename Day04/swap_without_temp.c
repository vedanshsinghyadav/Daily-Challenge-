// Write a program to swap two numbers without using a third variable

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using arithmetic)
    a = a + b;  
    b = a - b;  
    a = a - b;  

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
