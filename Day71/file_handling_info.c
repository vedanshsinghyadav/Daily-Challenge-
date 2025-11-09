/*Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved*/


#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Taking user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Creating and opening file in write mode
    fp = fopen("info.txt", "w");

    // Checking if file opened successfully
    if (fp == NULL) {
        printf("Error! File could not be created.\n");
        return 1;
    }

    // Writing data to file
    fprintf(fp, "Name: %s Age: %d\n", name, age);

    // Closing the file
    fclose(fp);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
