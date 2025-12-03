#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char s[10];
    scanf("%s", s);

    enum Status st;

    if(strcmp(s, "SUCCESS") == 0) st = SUCCESS;
    else if(strcmp(s, "FAILURE") == 0) st = FAILURE;
    else st = TIMEOUT;

    if(st == SUCCESS) printf("Operation successful");
    else if(st == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}
