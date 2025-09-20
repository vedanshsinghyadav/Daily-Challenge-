/*Reverse an array without taking extra space.*/

#include <stdio.h>  /* Standard I/O library */

int main() {

    /* Part 1: Declare variables */
    int n, i, temp;   /* n = size of array, i = loop counter, temp = temporary variable for swapping */

    /* Part 2: Input number of elements (positive integer) */
    do {
        printf("Enter number of elements in array (positive integer): ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    /* Part 3: Declare array of size n */
    int arr[n];

    /* Part 4: Input exactly n elements */
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Part 5: Reverse array in-place using two pointers */
    int start = 0, end = n - 1;   /* start = first index, end = last index */
    while(start < end) {
        temp = arr[start];         /* Swap arr[start] and arr[end] */
        arr[start] = arr[end];
        arr[end] = temp;

        start++;                   /* Move start forward */
        end--;                     /* Move end backward */
    }

    /* Part 6: Print reversed array */
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;  /* Program ends */
}


/*Concepts Used

Array (1D): Store multiple values in a single variable.

Two-pointer Technique:

start → first element

end → last element

Swap arr[start] and arr[end] until start >= end.

In-place Swapping:

Naya term: in-place → without using extra space.

Temporary variable temp is enough.

Loop (while): Continue swapping until array is reversed.

Example Run
Enter number of elements in array (positive integer): 5
Enter 5 elements:
10 20 30 40 50
Reversed array:
50 40 30 20 10 */