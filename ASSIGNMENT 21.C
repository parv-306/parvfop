
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    // Get source file path from user
    printf("Enter the source file path: ");
    scanf("%s", sourcePath);

    // Get destination file path from user
    printf("Enter the destination file path: ");
    scanf("%s", destPath);

    // Open the source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Could not open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}