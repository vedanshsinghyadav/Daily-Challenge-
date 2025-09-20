/*Find the sum of array elements*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Step 1: Input the number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Step 2: Declare an array of size n
    int arr[n];

    // Step 3: Input exactly n elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element
        sum += arr[i];         // Add the element to sum (accumulator)
    }

    // Step 4: Output the sum of array elements
    printf("Sum of array elements = %d\n", sum);

    return 0;
}


/*Concept Used

Array (1D) – ek hi data type ke multiple values ek variable arr[] mein store karne ke liye.
Example: agar n = 5 aur input 10 20 30 40 50 hai → ye sab arr[0] se arr[4] tak store hoga.

Loop (for loop) – ek hi code repeatedly chalane ke liye. Yaha hum loop use karte hain:

Input lene ke liye (scanf)

Sum calculate karne ke liye

Accumulator Variable (sum) – ek variable jisme continuously add karte jaate hain.

Initially sum = 0

Fir har element ko sum += arr[i]; se add karte gaye.*/



/*Dry Run Example

Input:

n = 5  
arr = [10, 20, 30, 40, 50]  


Steps:

sum = 0

i = 0 → sum = 0 + 10 = 10

i = 1 → sum = 10 + 20 = 30

i = 2 → sum = 30 + 30 = 60

i = 3 → sum = 60 + 40 = 100

i = 4 → sum = 100 + 50 = 150

Final Output → 150*/



/*
Array (1D):
An array is a linear data structure used to store multiple values of the same data type under a single variable name.
Example: If n = 5 and the input values are 10, 20, 30, 40, 50, they are stored as:

arr[0] = 10

arr[1] = 20

arr[2] = 30

arr[3] = 40

arr[4] = 50

Loop (for loop):
A loop is used to execute a set of instructions repeatedly.
In this program, the for loop is used for:

Taking input of array elements (scanf)

Calculating the sum of elements

Accumulator Variable (sum):
An accumulator is a variable that stores the result of repeated additions.

Initially, sum is set to 0

Each array element is added to sum using the statement sum += arr[i];*/