#include <stdio.h>

#define ROWS 3   // Define the number of rows
#define COLS 4   // Define the number of columns

void printMatrix(int matrix[][COLS], int rows, int cols);
void transposeMatrix(int original[][COLS], int transposed[][ROWS], int rows, int cols);

int main() {
    int original[ROWS][COLS];
    int transposed[COLS][ROWS];
    int i, j;

    // Input elements into the original 2D array
    printf("Enter %d elements for the %dx%d matrix:\n", ROWS * COLS, ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &original[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    transposeMatrix(original, transposed, ROWS, COLS);

    // Output the original matrix
    printf("Original matrix:\n");
    printMatrix(original, ROWS, COLS);

    // Output the transposed matrix
    printf("Transposed matrix:\n");
    printf("transposed, COLS, ROWS");

    return 0;
}

// Function to print a matrix
void printMatrix(int matrix[][COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the transpose of a matrix
void transposeMatrix(int original[][COLS], int transposed[][ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

