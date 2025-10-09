/*Remove all vowels from a string*/


#include <stdio.h>

int main() {
    // str = original input string, result = new string without vowels
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    // %[^\n] reads the entire line including spaces until Enter is pressed
    scanf("%[^\n]", str);

    // Loop runs until the end of the string ('\0' marks the end of a string in C)
    while (str[i] != '\0') {

        // Check if the current character is NOT a vowel (both lowercase and uppercase)
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {

            // Copy characters that are not vowels into the result string
            result[j] = str[i];
            j++; // Move to the next position in the result string
        }

        i++; // Move to the next character in the original string
    }

    // Add null terminator at the end to complete the string
    result[j] = '\0';

    printf("String without vowels: %s\n", result);

    return 0;
}
