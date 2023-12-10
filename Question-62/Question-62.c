// Program to demonstrate use of malloc() and free().

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int *arr;
    int size;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to demonstrate the use of malloc() and free() for dynamic memory allocation.\n\n");

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the entered size is non-negative
    if (size <= 0) {
        printf("Please enter a valid size for the array.\n");
        return 1; // Exit with an error code
    }

    // Allocate memory for the array using malloc
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Input elements for the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the entered elements
    printf("\nEntered elements in the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory using free
    free(arr);

    printf("\n\n<--- End of Code --->");

    return 0;
}
