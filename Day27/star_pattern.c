/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // number of rows for upper half

    // Upper half
    for(i = 1; i <= n; i++) {
        // print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n-1; i >= 1; i--) {
        // print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
