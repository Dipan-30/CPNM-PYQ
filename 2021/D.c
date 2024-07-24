#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0;
    int inWord = 0;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        // Check if the character is a space, newline, or tab
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    // Close the file
    fclose(file);

    // Print the counts
    printf("Total number of characters: %d\n", characters);
    printf("Total number of words: %d\n", words);

    return 0;
}
