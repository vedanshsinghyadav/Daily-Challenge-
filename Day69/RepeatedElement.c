/*Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element. 
Try to find the result in one single iteration*/



#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    // To find duplicate in one pass
    int freq[1000] = {0}; // assuming numbers are small (0-999)

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0; // found duplicate, exit immediately
        }
        freq[arr[i]]++;
    }

    printf("No repeated element found.\n");
    return 0;
}
