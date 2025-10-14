/*Reverse each word in a sentence without changing the word order.*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0'; // remove newline

    char *wordStart = str;
    char *ptr = str;

    while(1) {
        if(*ptr == ' ' || *ptr == '\0') {
            reverseWord(wordStart, ptr - 1);
            if(*ptr == '\0') break;
            wordStart = ptr + 1;
        }
        ptr++;
    }

    printf("Sentence with reversed words:\n%s\n", str);
    return 0;
}
