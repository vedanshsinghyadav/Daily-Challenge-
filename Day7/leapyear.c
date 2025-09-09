// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int year;
    
    // input lena
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year check karne ka logic
    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is NOT a Leap Year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    } 
    else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}
