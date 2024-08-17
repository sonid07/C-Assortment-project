#include <stdio.h>

#define ROWS 3   // Define the number of rows
#define COLS 4   // Define the number of columns

void printMatrix(int matrix[][COLS], int rows, int cols);
void sumRowAndColumn(int matrix[][COLS], int row, int col, int rows, int cols);

int main() {
    int matrix[ROWS][COLS];
    int row, col;

    // Input elements into the 2D array
    printf("Enter %d elements for the %dx%d matrix:\n", ROWS * COLS, ROWS, COLS);
   	int i,j;
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input the row and column to be summed
    printf("Enter the row number (0 to %d) to sum: ", ROWS - 1);
    scanf("%d", &row);
    printf("Enter the column number (0 to %d) to sum: ", COLS - 1);
    scanf("%d", &col);

    // Validate the input
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        printf("Invalid row or column number.\n");
        return 1;
    }

    // Print the matrix
    printf("Matrix:\n");
    printMatrix(matrix, ROWS, COLS);

    // Calculate and print the sum of the specified row and column
    sumRowAndColumn(matrix, row, col, ROWS, COLS);

    return 0;
}

// Function to print the matrix
void printMatrix(int matrix[][COLS], int rows, int cols) {
	int i,j;   
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate and print the sum of a specific row and column
void sumRowAndColumn(int matrix[][COLS], int row, int col, int rows, int cols) {
    int rowSum = 0;
    int colSum = 0;
	int i,j;
    // Calculate the sum of the specified row
    for ( j = 0; j < cols; j++) {
        rowSum += matrix[row][j];
    }

    // Calculate the sum of the specified column
    for ( i = 0; i < rows; i++) {
        colSum += matrix[i][col];
    }

    // Print the sums
    printf("Sum of elements in row %d: %d\n", row, rowSum);
    printf("Sum of elements in column %d: %d\n", col, colSum);
}

