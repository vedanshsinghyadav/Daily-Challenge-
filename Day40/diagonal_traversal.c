#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    // There are rows+cols-1 diagonals
    for(int d = 0; d < rows + cols - 1; d++) {
        // Determine the starting point of diagonal
        int row = (d < cols) ? 0 : d - cols + 1;
        int col = (d < cols) ? d : cols - 1;

        // Traverse the current diagonal
        while(row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
