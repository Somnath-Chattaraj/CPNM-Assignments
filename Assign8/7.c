#include <stdio.h>
#include <stdlib.h>

void copyFileContents(const char *source, const char *destination) {
    FILE *srcFile, *destFile;
    char ch;

    // Open source file in read mode
    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode
    destFile = fopen(destination, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(srcFile);
        exit(EXIT_FAILURE);
    }

    // Copy contents from source file to destination file
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(srcFile);
    fclose(destFile);
}

int main() {
    char sourceFile[100], destinationFile[100];

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFile);

    copyFileContents(sourceFile, destinationFile);

    return 0;
}
