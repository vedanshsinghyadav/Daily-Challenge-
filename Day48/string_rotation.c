/*Check if one string is a rotation of another*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    // Using fgets is safer than scanf as it prevents buffer overflows
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // fgets reads the newline character (\n) from the input, so we remove it
    // from both strings to ensure correct comparison.
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;


    // Step 1: Check if the lengths of both strings are equal.
    // If the lengths are not equal, they cannot be rotations of each other.
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not a rotation of each other.\n");
        return 0; // Exit the program early
    }

    // Step 2: Create a temporary string by concatenating the first string with itself.
    // For example, if str1 = "water", temp becomes "waterwater".
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 3: Check if the second string (str2) is a substring of the temporary string (temp).
    // The strstr() function checks for this. It returns NULL if the substring is not found.
    if (strstr(temp, str2) != NULL) {
        printf("Yes, strings are a rotation of each other.\n");
    } else {
        printf("No, strings are not a rotation of each other.\n");
    }

    return 0;
}