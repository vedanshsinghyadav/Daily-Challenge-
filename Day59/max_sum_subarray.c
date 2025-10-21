#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid value of k.\n");
        return 0;
    }
    
    int current_sum = 0;
    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    
    int max_sum = current_sum;
    
    for(int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if(current_sum > max_sum)
            max_sum = current_sum;
    }
    
    printf("Maximum sum of subarray of size %d is: %d\n", k, max_sum);
    
    return 0;
}
