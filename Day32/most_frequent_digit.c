/*  
   Program: Find the digit that occurs the most times in an integer number
   Author : Vedansh 
   Desc   : Reads an integer, counts frequency of each digit (0–9), 
            and prints the digit that occurs the most times.
*/

#include <stdio.h>

int main() {
    long long num;        // to handle large integers
    int count[10] = {0};  // frequency array for digits 0–9
    int digit, i, maxDigit = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // If negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;     // extract last digit
        count[digit]++;       // increment its count
        num /= 10;            // remove last digit
    }

    // Find digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    // Print result
    printf("Digit occurring most times: %d\n", maxDigit);
    printf("It occurs %d times.\n", count[maxDigit]);

    return 0;
}
