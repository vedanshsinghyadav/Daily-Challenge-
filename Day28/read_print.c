/*Read and print elements of a one-dimensional array*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
