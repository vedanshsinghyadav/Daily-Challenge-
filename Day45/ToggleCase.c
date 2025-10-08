/*Toggle case of each character in a string*/

#include <stdio.h>

int main() {
    char str[1000];   // Array to store the input string
    int i;            // Loop counter

    // Step 1: Take string input (with spaces)
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII: 'a' to 'A'
        }
        // If character is uppercase, convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // ASCII: 'A' to 'a'
        }
        // Non-alphabet characters remain unchanged
    }

    // Step 3: Print the modified string
    printf("\nToggled case string: %s", str);

    return 0;  // End of program
}


/*Concept Explanation 

Objective: Change every uppercase letter to lowercase and every lowercase letter to uppercase.

Input: A string (can include spaces and special characters).

Process:

1) Loop through each character.

2) If it’s lowercase ('a'-'z'), subtract 32 to make it uppercase.

3) If it’s uppercase ('A'-'Z'), add 32 to make it lowercase.

4 )Leave non-alphabet characters unchanged*/

