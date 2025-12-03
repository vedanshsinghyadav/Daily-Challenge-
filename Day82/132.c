#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    char input[10];
    scanf("%s", input);

    enum Light signal;

    if(strcmp(input, "RED") == 0)      signal = RED;
    else if(strcmp(input, "YELLOW") == 0) signal = YELLOW;
    else signal = GREEN;

    if(signal == RED) printf("Stop");
    else if(signal == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
