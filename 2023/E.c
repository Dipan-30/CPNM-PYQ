#include <stdio.h>
#include <stdlib.h>

// Function to concatenate two strings
char *f(char *A, char *B) {
    // Determine the length of A
    int length_A = 0;
    while (A[length_A] != '\0') {
        length_A++;
    }

    // Determine the length of B
    int length_B = 0;
    while (B[length_B] != '\0') {
        length_B++;
    }

    // Allocate memory for the concatenated string
    char *result = (char *)malloc((length_A + length_B + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Copy string A to result
    int i;
    for (i = 0; i < length_A; i++) {
        result[i] = A[i];
    }

    // Copy string B to result
    for (int j = 0; j < length_B; j++) {
        result[i + j] = B[j];
    }

    // Null-terminate the result string
    result[i + length_B] = '\0';

    return result;
}

int main() {
    char A[100], B[100];

    // Input strings A and B
    printf("Enter the first string (A): ");
    fgets(A, sizeof(A), stdin);
    // Remove newline character if present
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
    }

    printf("Enter the second string (B): ");
    fgets(B, sizeof(B), stdin);
    // Remove newline character if present
    for (int i = 0; B[i] != '\0'; i++) {
        if (B[i] == '\n') {
            B[i] = '\0';
            break;
        }
    }

    // Call the function and get the concatenated result
    char *result = f(A, B);

    // Print the result
    printf("Concatenated String: %s\n", result);

    // Free the allocated memory
    free(result);

    return 0;
}
