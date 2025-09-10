/*
   Ques: Write a program in C to check if a number is a Perfect Number.

   A perfect number is a number that is equal to the sum of its proper divisors 
      (excluding the number itself).
   
   Example:
   Input  : 28
   Divisors: 1 + 2 + 4 + 7 + 14 = 28
   Output : 28 is a Perfect Number
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of divisors (excluding the number itself)
    for(int i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number condition
    if(sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}
