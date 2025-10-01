/*Find the sum of main diagonal elements for a square matrix.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];
    printf("\nEnter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    printf("\nMain diagonal elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\n\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
