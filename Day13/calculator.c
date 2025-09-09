// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    int a, b;
    
    // input operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // note the space before %c

    // input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // switch-case for operations
    switch(op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

