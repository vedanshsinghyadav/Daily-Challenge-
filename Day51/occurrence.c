/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.*/


#include <stdio.h>  // Standard input/output library
// Provides printf() for printing and scanf() for reading input

// Function to find the first occurrence of target in a sorted array
// Uses binary search to efficiently find the first index of target
int firstOccurrence(int nums[100], int n, int target) {
    int low = 0;           // Start index of search range
    int high = n - 1;      // End index of search range
    int result = -1;       // Stores the first occurrence index; default -1 if not found

    // Binary search loop: runs until search space is exhausted
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid index safely to avoid overflow

        if (nums[mid] == target) {
            result = mid;      // Mid is a potential first occurrence
            high = mid - 1;    // Move left to check if an earlier occurrence exists
        } else if (nums[mid] < target) {
            low = mid + 1;     // Target is on the right side of mid
        } else {
            high = mid - 1;    // Target is on the left side of mid
        }
    }
    return result;  // Returns first occurrence index or -1 if target not present
}

// Function to find the last occurrence of target in a sorted array
// Uses binary search to efficiently find the last index of target
int lastOccurrence(int nums[], int n, int target) {
    int low = 0;           // Start index of search range
    int high = n - 1;      // End index of search range
    int result = -1;       // Stores the last occurrence index; default -1 if not found

    // Binary search loop: runs until search space is exhausted
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid index safely

        if (nums[mid] == target) {
            result = mid;      // Mid is a potential last occurrence
            low = mid + 1;     // Move right to check if a later occurrence exists
        } else if (nums[mid] < target) {
            low = mid + 1;     // Target is on the right side
        } else {
            high = mid - 1;    // Target is on the left side
        }
    }
    return result;  // Returns last occurrence index or -1 if target not present
}

int main() {
    int n;       // Stores size of the array
    int target;  // Stores the number we want to search in the array

    printf("Enter size of array: ");
    scanf("%d", &n);  // Read the number of elements from user

    int nums[n];  // Array to store sorted numbers
    // Arrays are used to store multiple elements in one variable
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);  // Input each array element

    printf("Enter target: ");
    scanf("%d", &target);  // Input the number to search for

    // Call functions to get first and last occurrence
    int first = firstOccurrence(nums, n, target);  // Call function to find first occurrence
    int last = lastOccurrence(nums, n, target);    // Call function to find last occurrence

    printf("%d %d\n", first, last);  // Print the results

    /*
                    Concept Explanation 
    Question Meaning:
    - Find the first and last positions (indices) of a target number in a sorted array.
    - If target is absent, print -1 -1.

    Variables and Their Use:
    1 nums[] - Stores the array elements.
    2. n - Size of the array.
    3 target - The number to search for.
    4 low, high - Pointers used in binary search to define the current search range.
    5. mid - Middle index in current search range.
    6. result - Stores the index of first/last occurrence; default -1 if not found.

    Functions:
     firstOccurrence() : Finds first index using modified binary search.
     lastOccurrence()  : Finds last index using modified binary search.

    How It Works:
     Binary search used because array is sorted (efficient O(log n)).
     For first occurrence: after finding target, continue left to ensure earliest index.
     For last occurrence: after finding target, continue right to ensure latest index.
     If target not found in search, result remains -1.

    Example:
    Array: 1 2 2 2 3 4 5
    Target: 2
    firstOccurrence -> finds index 1
    lastOccurrence  -> finds index 3
    Output: 1 3
    
    */

    return 0;  // Program ends successfully
}
