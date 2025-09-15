/* Write a program to print the following pattern:
5
45
345
2345
12345*/

#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Outer loop rows ke liye
    for (i = n; i >= 1; i--) {
        // Inner loop numbers print karne ke liye
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); // Next line
    }
    return 0;
}
