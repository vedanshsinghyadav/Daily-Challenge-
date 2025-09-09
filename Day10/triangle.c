// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    // input 3 sides
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // first check: is it a valid triangle?
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
