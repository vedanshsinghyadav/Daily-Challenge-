// Write a program to input two numbers and display their sum, difference, product, and quotient


#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // To avoid division by zero
    if (num2 != 0) {
        quotient = (float) num1 / num2;
        printf("\nResults:\n");
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}
