/*Search in a sorted array using binary search.*/

#include <stdio.h>

/* Function to perform Binary Search in a sorted array */
int binarySearch(int arr[], int n, int key) {
    int low = 0;          // Starting index
    int high = n - 1;     // Ending index

    // Loop until the search space is valid
    while (low <= high) {
        int mid = (low + high) / 2;   // Find the middle index

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;   // Return the index where key is found
        }
        // If key is greater, ignore left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }
    return -1;  // Key not found
}

int main() {
    int n, key;

    // Input: size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input: elements of the array (must be sorted)
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Call binary search function
    int result = binarySearch(arr, n, key);

    // Display result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in array\n");

    return 0;
}




/*

Code Explanation (Step by Step)


#include <stdio.h>


Ye line header file include karti hai.

stdio.h ka matlab hai Standard Input Output Header.

Isme printf aur scanf functions defined hote hain.

 Function to perform Binary Search in a sorted array 
int binarySearch(int arr[], int n, int key) {


Yaha humne ek function banaya binarySearch jo array ke andar ek element ko search karega.

Parameters:

arr[] → Sorted array jisme search karna hai.

n → Array ka size.

key → Wo element jo hume search karna hai.

    int low = 0;          // Starting index
    int high = n - 1;     // Ending index


low ko 0 set kiya (pehla index).

high ko n-1 set kiya (aakhri index).

    while (low <= high) {


Jab tak low chhota ya equal hai high ke, tab tak array ke andar search valid hai.

Agar low > high ho gaya, iska matlab search space khatam ho gaya.

        int mid = (low + high) / 2;   // Find the middle index


mid nikalte hain taaki hum beech wale element ko check kar saken.

Formula: (low + high) / 2.

        if (arr[mid] == key) {
            return mid;   // Return the index where key is found
        }


Agar middle element key ke equal hai → toh element mil gaya.

Uska index return kar do.

        else if (arr[mid] < key) {
            low = mid + 1;
        }


Agar middle element chhota hai key se → iska matlab key right side mein hoga.

Isliye low = mid + 1 kar dete hain.

        else {
            high = mid - 1;
        }


Agar middle element bada hai key se → iska matlab key left side mein hoga.

Isliye high = mid - 1 kar dete hain.

    }
    return -1;  // Key not found
}


Agar loop khatam ho gaya aur kuch return nahi hua, iska matlab element array mein hai hi nahi.

Tab hum -1 return kar dete hain (Not Found).

Main Function
int main() {
    int n, key;


Program yaha se start hota hai.

n → array ka size store karega.

key → search karne wala element.

    printf("Enter size of array: ");
    scanf("%d", &n);


User se array ka size input liya.

    int arr[n]; // Declare array of size n


Array declare kiya jiska size user ne diya hai.

    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


User se n elements input karwaye.

Important: Elements sorted hone chahiye warna binary search kaam nahi karega.

    printf("Enter element to search: ");
    scanf("%d", &key);


User se wo element liya jo search karna hai.

    int result = binarySearch(arr, n, key);


Binary search function ko call kiya aur result store kiya.

Agar element mila toh result mein uska index hoga.

Agar nahi mila toh -1 hoga.

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in array\n");


Agar result -1 nahi hai → element mil gaya.

Agar result -1 hai → element nahi mila.

    return 0;
}


Program successfully terminate karne ke liye return 0.

 Output Example
Enter size of array: 5
Enter 5 elements (sorted): 2 4 6 8 10
Enter element to search: 8
Element found at index 3*/


/*What is Binary Search?

Binary search is a searching algorithm used to find an element in a sorted array quickly

Time Complexity: O(log n)

Much faster than linear search (O(n))

Requirement: The array must be sorted (ascending or descending)

how it Works (Steps)

Take the starting index (low) and the ending index (high)

Find the middle index (mid):

mid = (low + high) / 2


Compare arr[mid] with the key (element to search):

If arr[mid] == key → element found.

If arr[mid] < key → element will be in the right half → set low = mid + 1.

If arr[mid] > key → element will be in the left half → set high = mid - 1.

Repeat steps until low <= high.

If the loop ends and the element is not found → return -1.

Example (Dry Run)

Array: {2, 4, 6, 8, 10, 12, 14}
Key: 10

Step 1: low = 0, high = 6
→ mid = (0+6)/2 = 3 → arr[3] = 8
→ 8 < 10 → search in right half → low = 4

Step 2: low = 4, high = 6
→ mid = (4+6)/2 = 5 → arr[5] = 12
→ 12 > 10 → search in left half → high = 4

Step 3: low = 4, high = 4
→ mid = (4+4)/2 = 4 → arr[4] = 10
→ Found at index 4 

Visualization
Step 1: [2, 4, 6, (8), 10, 12, 14]   → mid = 8 → search right
Step 2: [10, (12), 14]                → mid = 12 → search left
Step 3: [(10)]                        → mid = 10 → found!

Why is Binary Search Efficient?

Every step halves the search space.

Example: In an array of 1,000,000 elements, maximum ~20 steps are enough to find an element.

Linear search would take up to 1,000,000 steps in the worst case.*/