/*Delete an element from an array*/

#include <stdio.h>

int main() {
    int n, element, i, pos = -1;

    // 1️ Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // 2️ Input elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    // 3️ Input element to delete
    printf("Enter element to delete: ");
    scanf("%d", &element);

    // 4️ Find the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element not found in array.\n");
    } else {
        // 5️ Shift elements left
        for(i = pos; i < n-1; i++) arr[i] = arr[i+1];

        // 6️ Print updated array
        printf("Array after deletion: ");
        for(i = 0; i < n-1; i++) printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
