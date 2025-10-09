/*Find the first repeating lowercase alphabet in a string*/

/*Task: Find the first repeating lowercase alphabet in a string.
That means:

We only care about lowercase letters (a–z)

We need to return the first character that appears more than once

If no repeating lowercase letter → print "No repeating character"*/


#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // To count frequency of a-z
    int i = 0;
    char found = '\0'; // To store first repeating character

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read full string including spaces

    while (str[i] != '\0') {
        // Check only lowercase alphabets
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++; // Increase frequency

            // If frequency becomes 2, it's the first repeating
            if (freq[str[i] - 'a'] == 2) {
                found = str[i];
                break; // Stop as we found the first repeating character
            }
        }
        i++;
    }

    if (found)
        printf("First repeating lowercase alphabet: %c\n", found);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
