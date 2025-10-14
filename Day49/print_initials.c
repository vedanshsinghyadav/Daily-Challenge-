/*Print the initials of a name*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if(name[len - 1] == '\n') name[len - 1] = '\0';

    printf("Initials: ");

    // Print first character
    if(name[0] >= 'a' && name[0] <= 'z') {
        printf("%c", name[0] - 32); // convert to uppercase
    } else {
        printf("%c", name[0]);
    }

    // Loop through the rest
    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0') {
            char ch = name[i+1];
            if(ch >= 'a' && ch <= 'z') {
                ch = ch - 32; // convert to uppercase
            }
            printf("%c", ch);
        }
    }

    printf("\n");
    return 0;
}
