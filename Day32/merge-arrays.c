
/*  
   Program: Merge Two Arrays
   Author : Vedansh 
   Desc   : This program takes two arrays as input and merges them into a single array.
*/

#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements of first array
    printf("\nEnter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("\nEnter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Copy elements of arr1 into merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of arr2 into merged
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    // Print merged array
    printf("\nMerged Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

