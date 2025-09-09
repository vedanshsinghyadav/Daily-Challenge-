// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char ch;

    // input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // check vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel.\n", ch);
    } 
    else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}
