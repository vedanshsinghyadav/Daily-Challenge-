/*Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include <stdio.h>

int main() {
    int n;
    
    // Asking user to enter size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Asking user to enter elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");
    for(int i = 0; i < n; i++) {
        int nextGreater = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        printf("%d", nextGreater);
        if(i != n - 1) {
            printf(", ");
        }
    }

    return 0;
}

