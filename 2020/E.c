#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;
    int alphabets = 0, digits = 0;

    // Ask user for the file name
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Check if character is alphabetic
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabets++;
        }
        // Check if character is numeric
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
    }

    // Close the file
    fclose(file);

    // Print the counts
    printf("Total number of alphabetic characters: %d\n", alphabets);
    printf("Total number of numeric characters: %d\n", digits);

    return 0;
}
