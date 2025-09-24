/*Insert an element in an array at a given position*/

#include <stdio.h>

int main() {
    int n, pos, element;

    // 1️ Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n+1]; // +1 for new element

    // 2️ Input array elements
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // 3️ Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &element);

    // 4️ Input position (1-based)
    printf("Enter position to insert element (1 to %d): ", n+1);
    scanf("%d", &pos);

    // 5️ Shift elements to the right
    for(int i=n-1; i>=pos-1; i--)
        arr[i+1] = arr[i];

    // 6️ Insert element at given position
    arr[pos-1] = element;

    // 7️ Print updated array
    printf("Array after insertion: ");
    for(int i=0; i<=n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
