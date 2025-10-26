/*Write a program to take an integer array nums which contains only positive integers, 
and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
If no solution exists, print "-1 -1".
*/


  #include <stdio.h>
#include <stdlib.h>

void twoSum(int nums[], int n, int target) {
    // Check all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    
    // No solution found
    printf("-1 -1\n");
}

int main() {
    int n, target;
    
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    
    // Input array elements
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Input target
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    // Find and print the two indices
    twoSum(nums, n, target);
    
    return 0;
}