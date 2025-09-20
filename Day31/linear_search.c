/*Search for an element in an array using linear search*/

#include <stdio.h>  /* Standard Input-Output library */

int main() {

    /* Part 1: Declare variables */
    int n, i, key;       /* n = size of array, i = loop counter, key = element to search */
    int found = 0;       /* Flag to track if element is found */

    /* Part 2: Input number of elements (positive) */
    do {
        printf("Enter number of elements in array (positive integer): ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid input! Please enter a positive number.\n");
    } while(n <= 0);

    /* Part 3: Declare array of size n */
    int arr[n];

    /* Part 4: Input exactly n elements */
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Part 5: Input the element to search */
    printf("Enter element to search: ");
    scanf("%d", &key);

    /* Part 6: Linear Search through the array */
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;   /* Element found */
            break;       /* Stop searching once found */
        }
    }

    /* Part 7: Output result */
    if(found)
        printf("%d is present in the array at position %d\n", key, i+1); /* 1-based position */
    else
        printf("%d is not present in the array\n", key);

    return 0;  /* Program ends successfully */
}

/*
Code Explanation Part-wise
Part 1 – Include & Main
#include <stdio.h>   Standard Input-Output library 
int main() {


#include <stdio.h> → printf aur scanf ke liye zaruri hai.

int main() → program ka starting point.

Part 2 – Variable Declaration
int n, i, key;    n = size of array, i = loop counter, key = element to search 
int found = 0;    Flag to track if element is found 


n → array me elements ka number

i → loop counter

key → user jo element search karna chahte hain

found → flag variable

Naya term: flag variable → ek boolean-type variable jisse hum track karte hain ki condition true hui ya nahi (here, element found hai ya nahi).

Part 3 – Input Number of Elements
do {
    printf("Enter number of elements in array (positive integer): ");
    scanf("%d", &n);
    if(n <= 0)
        printf("Invalid input! Please enter a positive number.\n");
} while(n <= 0);


do-while loop:

Naya term: do-while → loop jo pehle execute hota hai, fir condition check hoti hai.

Use case: input validate karna (n > 0).

Part 4 – Declare Array
int arr[n];   Array to store n elements 


1D array arr[n] → n integers store karne ke liye.

Part 5 – Input Array Elements
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);   Read each element 
}


Loop se exactly n elements input kiye jaate hain.

arr[i] → ith element ka address.

Part 6 – Linear Search Logic
printf("Enter element to search: ");
scanf("%d", &key);

for(i = 0; i < n; i++) {
    if(arr[i] == key) {
        found = 1;    Element found 
        break;        Stop searching 
    }
}


Linear Search: ek-ek element check karte hain ki arr[i] == key.

break statement:

Naya term: break → loop ko turant rok deta hai, jab element mil jaaye.

found = 1 → flag update kar diya ki element mil gaya.

Part 7 – Output Result
if(found)
    printf("%d is present in the array at position %d\n", key, i+1);  1-based 
else
    printf("%d is not present in the array\n", key);


Agar element found → print position (1-based index)

Agar not found → print not present
*/