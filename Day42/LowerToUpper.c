/*Convert a lowercase string to uppercase without using built-in functions*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        // check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);
    return 0;
}
