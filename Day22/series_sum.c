/*
   Ques: Write a program in C to find the sum of the series:
         1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
   File Name: series_sum.c
*/

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i - 1) / i;   // kth term = (2i - 1)/i
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
