//command line argument
//dont try to run just read it.
#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;
    char ch;

    // Ensure the correct number of arguments are provided
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open source file for reading
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", argv[1]);
        return 1;
    }

    // Open destination file for writing
    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file %s\n", argv[2]);
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}
