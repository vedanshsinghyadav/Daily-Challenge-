/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index 
is equal to the sum of all the numbers strictly to the index's right. If the index is on the left 
edge of the array, then the left sum is 0 because there are no elements to the left. This also applies 
to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.*/

#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter %d integers (space or newline separated):\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;
    int pivot = -1;

    // Find pivot index
    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            pivot = i;  // Leftmost pivot
            break;
        }

        leftSum += arr[i];
    }

    // Output pivot index (-1 if not found)
    printf("%d\n", pivot);

    return 0;
}
