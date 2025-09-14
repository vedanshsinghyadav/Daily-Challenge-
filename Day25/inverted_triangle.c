/*
Question:
Write a C program to print the following pattern:
*****
****
***
**
*
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = n; i >= 1; i--) {
        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
