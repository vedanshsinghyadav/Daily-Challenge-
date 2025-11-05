/*Write a program to take a string input. Change it to sentence case*/




#include <stdio.h>   // For input/output functions like printf, fgets
#include <string.h>  // For string functions like strcspn
#include <ctype.h>   // For character functions like toupper, tolower

// Function to convert string to title case (first letter of each word capitalized)
void toSentenceCase(char *str) {
    int i = 0;           // Counter variable to traverse through the string
    int newWord = 1;     // Flag: 1 means next letter is start of a new word, 0 means middle of word
    
    // Loop through each character until we reach end of string (null character '\0')
    while (str[i] != '\0') {
        
        // Check if current character is a space
        if (str[i] == ' ') {
            // When we find a space, the next non-space character will be start of new word
            newWord = 1;
        } 
        // Check if we're at the start of a new word
        else if (newWord) {
            // Convert this character to uppercase (capital letter)
            str[i] = toupper(str[i]);
            // Now we're inside the word, so set flag to 0
            newWord = 0;
        } 
        // If not a space and not start of word, then it's middle of a word
        else {
            // Convert this character to lowercase (small letter)
            str[i] = tolower(str[i]);
        }
        
        i++;  // Move to next character
    }
}

int main() {
    // Declare a character array (string) that can hold up to 999 characters + null terminator
    char str[1000];
    
    // Ask user to enter a string
    printf("Enter a string: ");
    
    // Read the entire line of input from user (including spaces)
    // fgets reads until newline or max size, whichever comes first
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character '\n' that fgets adds at the end
    // strcspn finds position of '\n' and we replace it with '\0' (null terminator)
    str[strcspn(str, "\n")] = '\0';
    
    // Call our function to convert the string to title case
    toSentenceCase(str);
    
    // Print the converted string
    printf("Output: %s\n", str);
    
    return 0;  // Program executed successfully
}