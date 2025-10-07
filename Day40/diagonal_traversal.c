/*Perform diagonal traversal of a matrix*/

#include <stdio.h>

int main() {
    int m, n;

    // Step 1: Matrix size input
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int mat[100][100];

    // Step 2: Input matrix elements
    printf("Enter matrix elements row by row:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("Element at row %d, column %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    // Step 3: Diagonal traversal
    printf("\nDiagonal Traversal of the matrix:\n");
    // Total diagonals = m + n - 1
    for(int d=0; d < m+n-1; d++) {
        // starting row for this diagonal
        int start_row = (d < n) ? 0 : d - n + 1;
        // number of elements in this diagonal
        int count = (d < n) ? d + 1 : n + m - d - 1;

        printf("Diagonal %d: ", d+1);
        for(int i=0; i<count; i++) {
            int r = start_row + i;   // row index
            int c = d - r;           // column index
            printf("%d ", mat[r][c]);
        }
        printf("\n");
    }

    return 0;
}
