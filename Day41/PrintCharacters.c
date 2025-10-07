/*Print each character of a string on a new line*/


#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove trailing newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }

    // print each character on a new line
    i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
