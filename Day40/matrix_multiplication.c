/*Multiply two matrices.*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    // Input for First Matrix
    printf("--- Enter Size Details for the First Matrix ---\n");
    printf("Enter the number of rows: ");
    scanf("%d", &r1);
    printf("Enter the number of columns: ");
    scanf("%d", &c1);
    
    // Input for Second Matrix
    printf("\n--- Enter Size Details for the Second Matrix ---\n");
    printf("Enter the number of rows: ");
    scanf("%d", &r2);
    printf("Enter the number of columns: ");
    scanf("%d", &c2);
    
    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nError: Matrix multiplication not possible!\n");
        printf("Number of columns in first matrix must equal number of rows in second matrix.\n");
        return 1;
    }
    
    // Declare matrices
    int A[r1][c1], B[r2][c2], C[r1][c2];
    
    // Input elements for First Matrix
    printf("\n--- Enter Elements for the First Matrix (A) ---\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input elements for Second Matrix
    printf("\n--- Enter Elements for the Second Matrix (B) ---\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }
    
    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Display First Matrix
    printf("\n--- First Matrix (A) ---\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    // Display Second Matrix
    printf("\n--- Second Matrix (B) ---\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    // Display Result Matrix
    printf("\n--- Result Matrix (A x B) ---\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}