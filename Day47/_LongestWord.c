/*
Q94 (Strings)
--------------------------------------
Find the longest word in a sentence.
--------------------------------------

🧠 Problem:
Given a full sentence, we have to find which word is the longest.

Example:
Input  : "Hello I am Vedansh king of code"
Output : Vedansh

💡 Concepts used:
1. String = character array
2. gets() → to take input with spaces
3. Loop → to go through each character
4. Word detection → break on space
5. Copy → manually copy longest word

⚠️ Note:
- `gets()` is an older function (unsafe) but easy for beginners.
- In professional code, we use `fgets()` instead.
*/

#include <stdio.h>   // for input-output functions

int main() {

    // 🔹 Step 1: Variable declarations
    char sentence[200];   // stores the whole sentence entered by the user
    char word[50];        // stores each current word as we go
    char longest[50];     // stores the longest word found so far
    int i = 0, j = 0;     // i → index for sentence, j → index for word
    int max = 0;          // stores the length of longest word

    // 🔹 Step 2: Input sentence
    printf("Enter a sentence: ");
    gets(sentence);   // (old but simple) reads input with spaces
    // Example input: Hello I am Vedansh king of code
    // sentence[] = {'H','e','l','l','o',' ','I',' ','a','m',' ',...,'\0'}

    // 🔹 Step 3: Loop through the sentence until the null character '\0'
    while (sentence[i] != '\0') {

        // ✅ Case 1: Current character is NOT space — keep adding to current word
        if (sentence[i] != ' ') {
            word[j] = sentence[i];   // copy character to word
            j++;                     // move to next position in word
        } 
        else {
            // ✅ Case 2: A space found → means one full word is complete
            word[j] = '\0';          // end the current word string

            // Now check if this word is longest so far
            if (j > max) {           // j = current word length
                max = j;             // store new max length

                // Copy current word into 'longest'
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';   // end the longest word string
            }

            j = 0;   // reset word index for next word
        }

        i++; // move to next character in the sentence
    }

    // 🔹 Step 4: Handle the last word (if sentence doesn’t end with a space)
    word[j] = '\0';   // close last word
    if (j > max) {    // check last word length
        max = j;
        int k = 0;
        while (word[k] != '\0') {
            longest[k] = word[k];
            k++;
        }
        longest[k] = '\0';
    }

    // 🔹 Step 5: Display the result
    printf("\nLongest word: %s", longest);
    printf("\nLength: %d\n", max);

    return 0;
}
