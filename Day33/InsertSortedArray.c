/*Insert an element in a sorted array at the appropriate position*/

#include <stdio.h>

int main() {
    int n, element;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 because we will insert one new element

    // Step 2: Input sorted elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input the new element to insert
    printf("Enter element to insert: ");
    scanf("%d", &element);

    int i;
    // Step 4: Find correct position by shifting
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // shift element right
    }

    // Step 5: Place the new element
    arr[i + 1] = element;

    // Step 6: Print the updated array
    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
