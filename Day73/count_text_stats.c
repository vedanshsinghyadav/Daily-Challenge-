/*Read a text file and count the total number of characters, words, and lines.
 A word is defined as a sequence of non-space characters separated by spaces or newlines*/


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;  // Flag to track if we're currently in a word
    
    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);
    
    // Open file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        // Count lines
        if (ch == '\n') {
            lines++;
            if (in_word) {
                in_word = 0;
            }
        }
        // Count words (non-space character starts a word)
        else if (ch == ' ' || ch == '\t') {
            if (in_word) {
                in_word = 0;
            }
        }
        else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }
    
    // If file doesn't end with newline but has content, count it as a line
    if (characters > 0 && ch != '\n') {
        lines++;
    }
    
    // Close file
    fclose(file);
    
    // Display results
    printf("\nCharacters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}