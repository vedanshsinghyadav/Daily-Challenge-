/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached*/

#include <stdio.h>

int main() {
    FILE *file;
    char line[200];

    // open file in read mode
    file = fopen("info.txt", "r");

    // check if file opened successfully
    if (file == NULL) {
        printf("Error: Cannot open file info.txt\n");
        return 1;
    }

    // read and print each line until end of file
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // close the file
    fclose(file);

    return 0;
}
