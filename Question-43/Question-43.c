// Program to find the maximum and minimum integer in an array using functions.

#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the minimum element in an array
int findMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    // Declare variables for user input and array
    int size;

    // Input from the user for the size of the array
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to find the maximum and minimum elements in an array.\n\n");

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

    // Call functions to find the maximum and minimum
    int max = findMax(arr, size);
    int min = findMin(arr, size);

    // Display the maximum and minimum
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    printf("\n\n<--- End of Code --->");

    return 0;
}

