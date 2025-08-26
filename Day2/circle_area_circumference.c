// Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Taking input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying results
    printf("\nResults:\n");
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
