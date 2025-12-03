#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char r[10];
    scanf("%s", r);

    enum Role role;

    if(strcmp(r, "ADMIN") == 0) role = ADMIN;
    else if(strcmp(r, "USER") == 0) role = USER;
    else role = GUEST;

    if(role == ADMIN) printf("Welcome Admin!");
    else if(role == USER) printf("Welcome User!");
    else printf("Welcome Guest!");

    return 0;
}
