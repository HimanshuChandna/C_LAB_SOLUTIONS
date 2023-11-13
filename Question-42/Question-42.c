// Program to show sum of n elements of array & show the average.

#include <stdio.h>

int main() {
    // Declare variables for user input and array
    int n;

    // Input from the user for the size of the array
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to calculate the sum and average of elements in an array.\n\n");

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the entered size is non-negative
    if (n <= 0) {
        printf("Please enter a valid size for the array.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    // Input from the user for the array elements
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Calculate the average
    float average = (float)sum / n;

    // Display the sum and average
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    printf("\n\n<--- End of Code --->");

    return 0;
}

