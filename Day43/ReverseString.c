/*Reverse a string*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove trailing newline if present
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }

    // find string length manually
    int len = 0;
    while(str[len] != '\0') len++;

    // reverse the string
    printf("Reversed string: ");
    for(int j = len-1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}
