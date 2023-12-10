// Write a program to perform Linear search

#include <stdio.h>

// Function to perform linear search
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Target found, return the index
        }
    }
    return -1; // Target not found
}

int main() {
    // Declare variables for user input and array
    int size, target;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to perform Linear Search in an array.\n\n");

    // Input from the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Check if the entered size is non-negative
    if (size <= 0) {
        printf("Please enter a valid size for the array.\n");
        return 1; // Exit with an error code
    }

    int arr[size];

    // Input from the user for the array elements
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input from the user for the target value to search
    printf("Enter the target value to search: ");
    scanf("%d", &target);

    // Perform linear search
    int result = linear_search(arr, size, target);

    // Display the result
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
