#include <stdio.h>

#define MAX_SIZE 100  // Define a maximum size for the array

int main() {
    int arr[MAX_SIZE];
    int size, i;

    // Input the size of the array
    printf("Enter the number of elements in the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Ensure the size is within the allowed range
    if (size < 0 || size > MAX_SIZE) {
        printf("Invalid size!\n");
        return 1;
    }

    // Input the array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the negative elements
    printf("Negative elements in the array are:\n");
    int found_negative = 0;  // Flag to check if any negative element is found
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            found_negative = 1;
        }
    }

    if (!found_negative) {
        printf("No negative elements found.\n");
    }

    printf("\n");

    return 0;
}
