// Write a program to reverse array for given array.

#include <stdio.h>

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from start to end until the midpoint is reached
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices toward the center
        start++;
        end--;
    }
}

int main() {
    // Declare variables
    int size;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to reverse an array.\n\n");

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

    // Call the function to reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    printf("\nReversed array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
