
// Concept: Print initials of first and middle name, but display surname fully

#include <stdio.h>
#include <ctype.h>   // For toupper() function - converts character to uppercase

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);   // Input full name including spaces

    // Print the first letter as initial (FIRST NAME)
    printf("%c. ", toupper(name[0]));

    // Traverse through the string
    for (i = 1; name[i] != '\0'; i++) {

        // Check if space is found (means next word start)
        if (name[i] == ' ' && name[i + 1] != '\0') {

            // Check if this is the LAST WORD (surname check)
            int j = i + 1;
            int isSurname = 1;
            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    isSurname = 0;   // If another space found, not last word
                }
                j++;
            }

            // If it's surname → print FULL word
            if (isSurname) {
                printf("%s", &name[i + 1]);
                break;
            } 
            // Otherwise → print initial of middle name
            else {
                printf("%c. ", toupper(name[i + 1]));
            }
        }
    }

    return 0;
}
