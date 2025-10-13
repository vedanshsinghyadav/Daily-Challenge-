/* Program to find the longest word in a sentence */

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50];  // stores the longest word
    char current[50];  // stores word while reading
    int i = 0, j = 0;
    int maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);   // reads full line (with spaces)

    while (sentence[i] != '\0') { // loop runs till string ends
        if (sentence[i] != ' ') {  // if it's letter (not space)
            current[j++] = sentence[i]; // build current word
            currLen++;                  // count its length
        } else {
            current[j] = '\0';  // end current word

            if (currLen > maxLen) {     // check longest
                maxLen = currLen;
                strcpy(longest, current); // copy to longest
            }

            j = 0;         // reset for next word
            currLen = 0;
        }
        i++;
    }

    // last word check (because no space after last word)
    current[j] = '\0';
    if (currLen > maxLen) {
        strcpy(longest, current);
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}
