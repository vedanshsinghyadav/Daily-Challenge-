/*
Question:
Write a C program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
