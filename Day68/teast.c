#include <stdio.h>
#include <stdlib.h>

void encryptFile(char *fileName, int key) {
    FILE *fIn = fopen(fileName, "r");
    FILE *fOut = fopen("encrypted.txt", "w");
    char ch;

    if (fIn == NULL) {
        printf("\n❌ File not found!\n");
        return;
    }

    while ((ch = fgetc(fIn)) != EOF) {
        ch = ch ^ key;  // XOR encryption
        fputc(ch, fOut);
    }

    fclose(fIn);
    fclose(fOut);
    printf("\n✅ File Encrypted Successfully! (Saved as 'encrypted.txt')\n");
}

void decryptFile(char *fileName, int key) {
    FILE *fIn = fopen(fileName, "r");
    FILE *fOut = fopen("decrypted.txt", "w");
    char ch;

    if (fIn == NULL) {
        printf("\n❌ File not found!\n");
        return;
    }

    while ((ch = fgetc(fIn)) != EOF) {
        ch = ch ^ key;  // same XOR key decrypts
        fputc(ch, fOut);
    }

    fclose(fIn);
    fclose(fOut);
    printf("\n✅ File Decrypted Successfully! (Saved as 'decrypted.txt')\n");
}

int main() {
    char fileName[100];
    int choice, key;

    printf("=====================================\n");
    printf("     🔐 File Encryption Tool (C)     \n");
    printf("=====================================\n");
    printf("1. Encrypt a file\n");
    printf("2. Decrypt a file\n");
    printf("-------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter file name (with extension): ");
    scanf("%s", fileName);

    printf("Enter secret key (any number): ");
    scanf("%d", &key);

    if (choice == 1)
        encryptFile(fileName, key);
    else if (choice == 2)
        decryptFile(fileName, key);
    else
        printf("\n⚠️ Invalid choice!\n");

    printf("\nThank you for using the tool 💻\n");
    return 0;
}
