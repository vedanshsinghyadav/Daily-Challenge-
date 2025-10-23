/*Write a program to take an integer array arr as input. 
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. If all elements are negative, print the largest (least negative) element*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Kadane’s core logic
        if (curr_sum < 0)
            curr_sum = arr[i];
        else
            curr_sum += arr[i];

        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    printf("%d", max_sum);
    return 0;
}
