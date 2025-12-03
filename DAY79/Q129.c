#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter size of first array: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("Enter size of second array: ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter elements: ");
    for(i=0;i<m;i++) scanf("%d",&arr2[i]);
    printf("Merged array: ");
    for(i=0;i<n;i++) printf("%d ", arr1[i]);
    for(i=0;i<m;i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
