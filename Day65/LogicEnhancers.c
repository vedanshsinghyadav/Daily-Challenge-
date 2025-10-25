/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram"*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq1[26] = {0}, freq2[26] = {0};

    // 🔹 Input section
    // Enter two lowercase strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // 🔹 Check if lengths are equal
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // 🔹 Count character frequency for both strings
    for (int i = 0; s[i] != '\0'; i++)
        freq1[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        freq2[t[i] - 'a']++;

    // 🔹 Compare both frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    // 🔹 If all matched
    printf("Anagram");
    return 0;
}
