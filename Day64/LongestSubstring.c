
// Q114_LongestSubstringWithoutRepeatingCharacters.c
// Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    // 🔹 Input Section
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int last_index[256]; // for all ASCII characters

    // Initialize all last indexes to -1
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0, start = 0;

    // 🔹 Logic Section
    for (int end = 0; end < n; end++) {
        if (last_index[(unsigned char)s[end]] >= start) {
            start = last_index[(unsigned char)s[end]] + 1;
        }
        last_index[(unsigned char)s[end]] = end;
        int current_len = end - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    // 🔹 Output Section
    printf("Length of longest substring without repeating characters: %d\n", max_len);

    return 0;
}
