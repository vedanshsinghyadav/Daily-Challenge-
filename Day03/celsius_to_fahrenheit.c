// Write a program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
