/*Count even and odd numbers in an array*/

#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Input number of elements (n must be positive)
    do {
        printf("Enter number of elements in array (positive integer): ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    int arr[n];               // Step 2: Declare array of size n
    int evenCount = 0, oddCount = 0;  // Step 3: Initialize counters

    // Step 4: Input exactly n elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Traverse array to count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;  // Increment even counter
        } else {
            oddCount++;   // Increment odd counter
        }
    }

    // Step 6: Output results
    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;
}

/*concept user

Part 1 – Include & Main
#include <stdio.h>    Standard Input-Output library for printf and scanf 

int main() {


Ye program ka start hai.

stdio.h input-output ke liye zaruri hai.

Part 2 – Declare Variables
    int n, i;
    int evenCount = 0, oddCount = 0;   Counters for even and odd numbers 


n → array size

i → loop counter

evenCount aur oddCount → track even & odd numbers

Part 3 – Input Number of Elements
    do {
        printf("Enter number of elements in array (positive integer): ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);


Loop ensures n is positive.

Agar user 0 ya negative number de → prompt dobara.

Part 4 – Declare Array
    int arr[n];   Array to store n elements 


1D array create kiya to store exactly n integers.

Part 5 – Input Array Elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   Read each element into the array 
    }


Loop se exactly n elements input liye.

Extra inputs ignore ho jaate hain.

Part 6 – Count Even & Odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;   Increment even counter if divisible by 2 
        } else {
            oddCount++;    Increment odd counter otherwise 
        }
    }


Loop se array traverse kiya.

% 2 operator check karta hai even/odd.

Counters update hote hain.

Part 7 – Print Result & End
    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;  Program ends successfully 
}


Final output print hota hai.

Program terminate ho jata hai. */