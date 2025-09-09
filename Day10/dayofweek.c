// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int day;

    // input number
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // switch-case for days
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

