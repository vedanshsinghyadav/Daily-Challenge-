// Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Conversion
    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60; // remaining minutes
    seconds = total_seconds % 60;          // remaining seconds

    // Display in hh:mm:ss format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
