/*Count characters in a string without using built-in length functions*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;

    // remove trailing newline from fgets (if present)
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }

    // count characters without strlen
    int count = 0;
    while (str[count] != '\0') count++;

    printf("Character count: %d\n", count);
    return 0;
}
