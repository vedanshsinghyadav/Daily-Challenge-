// Write a program to calculate simple and compound interest for given principal, rate, and time

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest formula
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Display results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
