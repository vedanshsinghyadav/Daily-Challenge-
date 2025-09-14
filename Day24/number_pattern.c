/*
Question:
Write a C program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
