/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence*/


#include <stdio.h>

// Function to find the index of the ceil of x using binary search
// Ceil = smallest element in arr[] which is >= x
int ceilIndex(int arr[], int n, int x) {
    int low = 0;          // Start of search range
    int high = n - 1;     // End of search range
    int res = -1;         // To store index of ceil (default -1 if not found)

    // Binary search loop
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Middle index

        if (arr[mid] >= x) {
            res = mid;        // Found a possible ceil
            high = mid - 1;   // But we want the first occurrence, so search left side
        } else {
            low = mid + 1;    // arr[mid] < x, search right side
        }
    }

    return res;  // Return index of ceil (or -1 if no element >= x)
}

int main() {
    int n, x;

    // Input size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input x for which we want to find the ceil
    printf("Enter x: ");
    scanf("%d", &x);

    // Call function to get index of ceil
    int index = ceilIndex(arr, n, x);

    // Print the index
    printf("%d\n", index);

    return 0;
}
