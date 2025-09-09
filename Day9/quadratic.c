// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;

    // input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // calculate discriminant
    D = b*b - 4*a*c;

    if (D > 0) {
        // real and distinct
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (D == 0) {
        // real and equal
        root1 = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
    }
    else {
        // imaginary roots
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

