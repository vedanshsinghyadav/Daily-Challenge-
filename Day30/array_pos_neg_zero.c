/*Count positive, negative, and zero elements in an array*/

#include <stdio.h>   /* Standard Input-Output library for printf and scanf */

int main() {

    /* Part 1: Declare variables */
    int n, i;                          /* n = number of elements, i = loop counter */
    int posCount = 0, negCount = 0, zeroCount = 0;  /* Counters for positive, negative, and zero elements */

    /* Part 2: Input number of elements (must be positive) */
    do {
        printf("Enter number of elements in array (positive integer): ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    /* Part 3: Declare array of size n */
    int arr[n];  /* Array to store n elements */

    /* Part 4: Input exactly n elements into the array */
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  /* Read each element into the array */
    }

    /* Part 5: Traverse the array to count positive, negative, and zero elements */
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            posCount++;  /* Increment positive counter */
        } else if(arr[i] < 0) {
            negCount++;  /* Increment negative counter */
        } else {
            zeroCount++; /* Increment zero counter */
        }
    }

    /* Part 6: Print the counts */
    printf("Number of positive elements = %d\n", posCount);
    printf("Number of negative elements = %d\n", negCount);
    printf("Number of zero elements = %d\n", zeroCount);

    return 0;  /* Program ends successfully */
}


/*Concept Used

Array (1D): Store multiple integers.

Loop (for): Input elements and traverse array.

Conditional Statements (if-else if-else):

>0 → positive

<0 → negative

==0 → zero

Counters: posCount, negCount, zeroCount to track respective counts.

Robust Input: User must enter positive n, extra elements ignore ho jaate hain.

 Example Run
Enter number of elements in array (positive integer): 7
Enter 7 elements:
10 -5 0 0 15 -2 8
Number of positive elements = 3
Number of negative elements = 2
Number of zero elements = 2*/