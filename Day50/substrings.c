/*Print all sub-strings of a string*/

#include <stdio.h>   // Include standard I/O library for printf and fgets
#include <string.h>  // Include string library for strlen and strcspn functions

// Function to print all substrings of a given string
void printSubstrings(char str[]) {
    int len = strlen(str);  // Get the length of the string
    int i, j, k;            // Loop counters: i=start, j=end, k=printing chars

    // Outer loop: iterate over each character as starting index of substring
    for (i = 0; i < len; i++) {
        // Middle loop: iterate over each character from i to end as ending index
        for (j = i; j < len; j++) {
            // Inner loop: print characters from start index i to end index j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);  // Print current character in substring
            }
            printf("\n");  // Finish one substring and move to new line
        }
    }
}

int main() {
    char str[100];  // Array to store input string (max 100 chars)

    printf("Enter a string: ");          // Prompt user to enter string
    fgets(str, sizeof(str), stdin);      // Read string safely (includes newline)

    // Remove trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    printf("All substrings are:\n");    // Print header for substring output
    printSubstrings(str);                // Call function to print all substrings

    return 0;  // Program ends successfully
}
