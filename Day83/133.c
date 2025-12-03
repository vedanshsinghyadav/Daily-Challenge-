#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char m[5];
    scanf("%s", m);

    enum Month month;

    if(strcmp(m, "JAN") == 0) month = JAN;
    else if(strcmp(m, "FEB") == 0) month = FEB;
    else if(strcmp(m, "MAR") == 0) month = MAR;
    else if(strcmp(m, "APR") == 0) month = APR;
    else if(strcmp(m, "MAY") == 0) month = MAY;
    else if(strcmp(m, "JUN") == 0) month = JUN;
    else if(strcmp(m, "JUL") == 0) month = JUL;
    else if(strcmp(m, "AUG") == 0) month = AUG;
    else if(strcmp(m, "SEP") == 0) month = SEP;
    else if(strcmp(m, "OCT") == 0) month = OCT;
    else if(strcmp(m, "NOV") == 0) month = NOV;
    else month = DEC;

    switch(month) {
        case FEB:
            printf("28 or 29 days");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days");
            break;
        default:
            printf("31 days");
    }

    return 0;
}
