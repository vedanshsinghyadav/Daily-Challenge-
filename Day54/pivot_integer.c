/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements 
between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. 
If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/

#include <stdio.h>

int main() {
    int n;
    
    // Input from user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // sum of 1 to n
    int leftSum = 0;
    int pivot = -1;

    // Find pivot integer
    for(int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - (leftSum - x); // sum from x to n

        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    // Print pivot integer (-1 if not found)
    printf("%d\n", pivot);

    return 0;
}
