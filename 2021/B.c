#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char result[200]; // Ensure this is large enough to hold the result

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    // Copy str1 to result
    int j = 0;
    while (str1[j] != '\0') {
        result[j] = str1[j];
        j++;
    }

    // Add a space between the two strings
    result[j] = ' ';
    j++;

    // Copy str2 to result
    int k = 0;
    while (str2[k] != '\0') {
        result[j] = str2[k];
        j++;
        k++;
    }

    // Null-terminate the result string
    result[j] = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
