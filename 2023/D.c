#include <stdio.h>
#include <limits.h>

int main() {
    FILE *file;
    int number;
    int max = INT_MIN;
    int min = INT_MAX;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read integers from the file and find the max and min values
    while (fscanf(file, "%d", &number) != EOF) {
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    // Close the file
    fclose(file);

    // Print the max and min values
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
