#include <stdio.h>

int main() {
    int n, pos=0, neg=0, zero=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], i;
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0) pos++;
        else if(arr[i]<0) neg++;
        else zero++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
