#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[15];
    int a, b;
    scanf("%s %d %d", op, &a, &b);

    enum Menu choice;

    if(strcmp(op, "ADD") == 0) choice = ADD;
    else if(strcmp(op, "SUBTRACT") == 0) choice = SUBTRACT;
    else choice = MULTIPLY;

    switch(choice) {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }

    return 0;
}
