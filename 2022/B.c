#include <stdio.h>

int main() {
    char input[100];  // Assuming the input string will not exceed 100 characters
    char output[100]; // Output string to store the modified string
    int i = 0, j = 0;

    // Input the string
    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);

    // Replace spaces with '|' and copy to output array
    while (input[i] != '\0') {
        if (input[i] == ' ') {
            output[j] = '|';
        } else {
            output[j] = input[i];
        }
        i++;
        j++;
    }
    // Print the modified string 
    printf("Modified string: %s\n", output);

    return 0;
}
