// Write a program using pointers to read array elements and find their sum.

#include <stdio.h>

// Function to find the sum of array elements using pointers
int findArraySum(int *arr, int size) {
    int sum = 0;

    // Iterate through the array using pointers
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i); // Dereference the pointer to get the value
    }

    return sum;
}

int main() {
    // Declare variables
    int size;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program using pointers to read array elements and find their sum.\n\n");

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the entered size is non-negative
    if (size <= 0) {
        printf("Please enter a valid size for the array.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of the given size
    int arr[size];

    // Input array elements using pointers
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &(*(arr + i))); // Use pointers to input array elements
    }

    // Call the function to find the sum using pointers
    int sum = findArraySum(arr, size);

    // Display the sum of array elements
    printf("\nSum of array elements: %d\n", sum);

    printf("\n\n<--- End of Code --->");

    return 0;
}
