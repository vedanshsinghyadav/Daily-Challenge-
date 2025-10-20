/*Write a Program to take an integer array nums. 
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/



#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int totalProduct = 1, zeroCount = 0;

    // Calculate product of all non-zero elements
    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) {
            zeroCount++;
        } else {
            totalProduct *= nums[i];
        }
    }

    // Output array
    for(int i = 0; i < n; i++) {
        if(zeroCount > 1) {
            printf("0");
        } else if(zeroCount == 1) {
            if(nums[i] == 0) {
                printf("%d", totalProduct);
            } else {
                printf("0");
            }
        } else {
            printf("%d", totalProduct / nums[i]);
        }

        if(i != n - 1) printf(", ");
    }

    return 0;
}
