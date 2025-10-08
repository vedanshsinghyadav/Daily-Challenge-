/*Replace spaces with hyphens in a strin*/

#include <stdio.h>

int main() {
    char str[1000];   // Array to store the input string
    int i;            // Loop counter

    // Step 1: Take full string input including spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // fgets allows spaces in input

    // Step 2: Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Step 3: If the current character is a space, replace it with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
        // Alphabets, digits, and special characters remain unchanged
    }

    // Step 4: Print the modified string
    printf("\nModified string: %s", str);

    return 0;  // End of program
}
