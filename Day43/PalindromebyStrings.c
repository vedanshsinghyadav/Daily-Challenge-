/*Check if a string is a palindrome*/

#include <stdio.h>

int main() {
    char str[1000];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // takes string without spaces

    // find length manually
    for (j = 0; str[j] != '\0'; j++);

    // check palindrome
    for (i = 0; i < j / 2; i++) {
        if (str[i] != str[j - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf(" The string is a palindrome.\n");
    else
        printf(" The string is NOT a palindrome.\n");

    return 0;
}
