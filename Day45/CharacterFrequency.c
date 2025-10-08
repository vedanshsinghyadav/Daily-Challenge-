/*Count frequency of a given character in a string*/

#include <stdio.h>

int main() {
    char str[1000];   // Array to store the input string
    char ch;          // Character whose frequency we want to count
    int i, count = 0; // Loop counter and frequency counter

    // Step 1: Take string input (with spaces)
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Take the character whose frequency needs to be counted
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Step 3: Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {  // If character matches, increment count
            count++;
        }
    }

    // Step 4: Display the frequency of the character
    printf("\nThe character '%c' appears %d times in the string.\n", ch, count);

    return 0;  // End of program
}


/*Concept Explanation 

Objective: Count the number of times a given character appears in a string.

Input: A string (can include spaces) and a character.

Process:

1) Loop through each character of the string.

2) Compare with the given character.

3) If it matches, increment a counter.

Output: Frequency of the given characte*/