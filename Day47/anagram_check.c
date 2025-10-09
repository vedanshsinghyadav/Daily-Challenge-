/*Check if two strings are anagrams of each other*/


#include <stdio.h>

int main() {
    // Two input strings
    char str1[100], str2[100];
    
    // Frequency array to store count of all ASCII characters
    // Initialized to 0 for all 256 possible characters
    int freq[256] = {0};  
    int i = 0, isAnagram = 1;

    // Input first string
    printf("Enter first string: ");
    scanf("%[^\n]", str1);  // Reads full line including spaces

    getchar(); // Clears the newline character left in buffer

    // Input second string
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // STEP 1: Count frequency of each character in first string
    i = 0;
    while (str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;  // Increase count for each character
        i++;
    }

    // STEP 2: Subtract frequency using second string characters
    i = 0;
    while (str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;  // Decrease count for each character
        i++;
    }

    // STEP 3: If both strings are anagrams, all frequency values must be 0
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {  // If any count is non-zero → not an anagram
            isAnagram = 0;
            break;
        }
    }

    // FINAL RESULT
    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
