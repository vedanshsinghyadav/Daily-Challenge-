/*Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc() and fputc()*/

 #include <stdio.h>
#include <stdlib.h>

int main() {
    char srcName[256], dstName[256];
    FILE *src, *dst;
    int ch;

    printf("Source File: ");
    if (scanf("%255s", srcName) != 1) {
        fprintf(stderr, "Error reading source filename.\n");
        return 1;
    }

    printf("Destination File: ");
    if (scanf("%255s", dstName) != 1) {
        fprintf(stderr, "Error reading destination filename.\n");
        return 1;
    }

    src = fopen(srcName, "r");
    if (src == NULL) {
        fprintf(stderr, "Could not open source file '%s'.\n", srcName);
        return 1;
    }

    dst = fopen(dstName, "w");
    if (dst == NULL) {
        fprintf(stderr, "Could not create/open destination file '%s'.\n", dstName);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            fprintf(stderr, "Write error to '%s'.\n", dstName);
            fclose(src);
            fclose(dst);
            return 1;
        }
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s\n", dstName);
    return 0;
}
