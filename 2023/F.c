#include <stdio.h>
#include <stdlib.h>

// Function to check if the matrix is upper triangular
int is_upper_triangular(int **matrix, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

int main() {
    int n;

    // Input matrix dimension
    printf("Enter the dimension of the matrix (n x n): ");
    scanf("%d", &n);

    // Allocate memory for the matrix
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is upper triangular
    if (is_upper_triangular(matrix, n)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
