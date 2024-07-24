// write a program in c which dynamiclly allocate memory for two matrices(of same order).The program reads the order of elements of 
// the matrices from the user. The program creates a third matrix which is obtained by adding the two input matrices.

#include <stdio.h>
#include <stdlib.h>

void read_matrix(int **matrix, int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int **matrix, int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the order of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for matrices
    int **matrix1 = (int **)malloc(rows * sizeof(int *));
    int **matrix2 = (int **)malloc(rows * sizeof(int *));
    int **result = (int **)malloc(rows * sizeof(int *));
    
    for (int i = 0; i < rows; i++) {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
        matrix2[i] = (int *)malloc(cols * sizeof(int));
        result[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input matrices
    printf("Matrix 1:\n");
    read_matrix(matrix1, rows, cols);
    
    printf("Matrix 2:\n");
    read_matrix(matrix2, rows, cols);

    // Calculate the sum of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the matrices
    printf("\nMatrix 1:\n");
    print_matrix(matrix1, rows, cols);
    
    printf("\nMatrix 2:\n");
    print_matrix(matrix2, rows, cols);
    
    printf("\nResultant Matrix (sum of Matrix 1 and Matrix 2):\n");
    print_matrix(result, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
