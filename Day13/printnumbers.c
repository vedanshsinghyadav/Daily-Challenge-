// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    // input n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
