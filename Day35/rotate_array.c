#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation value k: ");
    scanf("%d", &k);
    k = k % n;

    int rotated[n];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
