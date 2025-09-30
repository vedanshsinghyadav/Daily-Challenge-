#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Prompt user for dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare matrices as arrays
    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    // Input elements for the first matrix
    printf("\nEnter elements of the FIRST matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nNow, enter elements of the SECOND matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display the first matrix
    printf("\nYour FIRST Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("\nYour SECOND Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    // Add matrices and display step-by-step addition
    printf("\nAdding the two matrices, element by element:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("Element at (Row %d, Column %d): %d + %d = %d\n", 
                   i + 1, j + 1, matrix1[i][j], matrix2[i][j], sumMatrix[i][j]);
        }
    }

    // Display the final sum matrix
    printf("\nFinal Sum of the two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}