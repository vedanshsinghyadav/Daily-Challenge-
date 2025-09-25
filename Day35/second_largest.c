/*  Find the second largest element in an array
   
   Problem: We are given a 1D array. 
   Task: Find the second largest element in this array.
*/

#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Take the size of the array from the user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // If the array has less than 2 elements, 
    // second largest cannot exist
    if (n < 2) {
        printf("Second largest element does not exist.\n");
        return 0;  // end program
    }

    int arr[n]; // declare the array

    // Step 2: Take array input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;  // variables to store largest and second largest

    // Step 3: Initialize using the first two elements
    if (arr[0] > arr[1]) {
        first = arr[0];   // largest
        second = arr[1];  // second largest
    } else {
        first = arr[1];
        second = arr[0];
    }

    // Step 4: Traverse the rest of the array (from index 2 onwards)
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            // If current element is greater than the largest
            second = first;   // old largest becomes second largest
            first = arr[i];   // update largest
        } 
        else if (arr[i] > second && arr[i] != first) {
            // If current element is greater than second largest
            // and not equal to the largest
            second = arr[i];  // update second largest
        }
    }

    // Step 5: Print the result
    if (first == second) {
        // Case when all elements are the same
        printf("Second largest element does not exist (all elements are same).\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}

/*

    EXPLANATION SUMMARY

1. Input the array size and elements.
2. Initialize 'first' and 'second' using the first two elements.
3. Traverse the remaining array:
   - If an element is greater than 'first':
         update 'second = first' and 'first = element'.
   - Else if element is greater than 'second' 
         and not equal to 'first', update 'second'.
4. Print the second largest.
5. Edge cases handled:
   - If array size < 2 -> second largest does not exist.
   - If all elements are the same -> second largest does not exist.


Example:
Input: 5
       10 45 3 99 23
Working:
   first = 45, second = 10
   next = 3 (no change)
   next = 99 -> first = 99, second = 45
   next = 23 (no change)
Output: Second largest element = 45
*/
