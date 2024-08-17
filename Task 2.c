#include <stdio.h>

#define ROWS 3   // Define the number of rows
#define COLS 4   // Define the number of columns

int main() {
    int array[ROWS][COLS];
    int i, j;
    int largest;

    // Input elements into the 2D array
    printf("Enter %d elements for the %dx%d array:\n", ROWS * COLS, ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Initialize the largest element to the first element of the array
    largest = array[0][0];

    // Find the largest element
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

