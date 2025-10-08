/*Count spaces, digits, and special characters in a string*/

#include <stdio.h>   // Header file for input/output functions

int main() {
    char str[1000];   // To store the input string
    int spaces = 0, digits = 0, special = 0, i;  // Counters for each category

    // Step 1: Take full string input including spaces using fgets()
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Loop through each character until null terminator '\0'
    for (i = 0; str[i] != '\0'; i++) {
        
        // Step 3: If the current character is a space (' ')
        if (str[i] == ' ')
            spaces++;

        // Step 4: If the current character is a digit (0–9)
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;

        // Step 5: If it’s an alphabet (A–Z or a–z), skip it (we only count non-alphabets)
        else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                 (str[i] >= 'a' && str[i] <= 'z'))
            continue;

        // Step 6: If it’s none of the above (and not newline), it’s a special character
        else if (str[i] != '\n')
            special++;
    }

    // Step 7: Display the results
    printf("\nSpaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;  // Successful program execution
}
