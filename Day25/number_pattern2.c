/*
Question:
Write a C program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = n; i >= 1; i--) {
        // Inner loop from i to n
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
