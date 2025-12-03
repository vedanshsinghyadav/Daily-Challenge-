/*Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.*/


#include <stdio.h>

int main() {
    int n, i, even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}