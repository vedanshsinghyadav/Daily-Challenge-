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

    int flag = 1; // assume distinct
    // check diagonal distinctness
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }

    printf("\nChecking distinctness of diagonal elements...\n");

    if (flag)
        printf("✅ Result: All diagonal elements are DISTINCT.\n");
    else
        printf("❌ Result: Diagonal elements are NOT distinct.\n");

    return 0;
}
