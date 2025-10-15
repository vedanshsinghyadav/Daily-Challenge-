// File: date_format.c
// Concept: Convert date from dd/04/yyyy to dd-Apr-yyyy

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Extract day (first two characters)
    strncpy(day, date, 2);
    day[2] = '\0';

    // Extract year (characters after 4th index)
    strncpy(year, date + 5, 4);
    year[4] = '\0';

    // Print in new format
    printf("%s-Apr-%s\n", day, year);

    return 0;
}
