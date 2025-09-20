/*Find the maximum and minimum element in an array*/


#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Input the number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];  // Step 2: Declare array of size n

    // Step 3: Input exactly n elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Only n elements are read
    }

    // Step 4: Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];

    // Step 5: Traverse array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];  // update max
        }
        if(arr[i] < min) {
            min = arr[i];  // update min
        }
    }

    // Step 6: Output results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

/*
1)Initialization

int max = arr[0];
int min = arr[0];


Pehla element dono max aur min me store kiya.

Kyun? Taaki baaki elements ke sath comparison start kar sake.

Loop through the array

for(i = 1; i < n; i++)


2)Loop 1 se n-1 tak chalega.

Index 0 already consider ho chuka hai initialization me.

3)Check for maximum

if(arr[i] > max) {
    max = arr[i];
}


Agar current element arr[i] max se bada hai → update max.

Isse max hamesha array ka largest element banega.

4)Check for minimum

if(arr[i] < min) {
    min = arr[i];
}


Agar current element arr[i] min se chhota hai → update min.

Isse min hamesha array ka smallest element banega.

5)Visual Example

Input array: [10, 56, 3, 78, 25]

Step	i	arr[i]	max	min
Init	-	-	10	10
1	1	56	56	10
2	2	3	56	3
3	3	78	78	3
4	4	25	78	3

Final → max = 78, min = 3*/
