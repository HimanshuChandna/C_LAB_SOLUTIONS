// Write a program to declare an array of pointers, read values and print them.

#include <stdio.h>
#include <stdlib.h> 

int main() {
    // Declare variables
    int n;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to declare an array of pointers, read values, and print them.\n\n");

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the entered size is non-negative
    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of pointers
    int *arrPtr[n];

    // Input values using pointers
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; ++i) {
        // Allocate memory for each element and store its address in the array of pointers
        arrPtr[i] = (int *)malloc(sizeof(int));

        // Input the value using the pointer
        printf("Element %d: ", i + 1);
        scanf("%d", arrPtr[i]);
    }

    // Display the values using pointers
    printf("\nValues entered:\n");
    for (int i = 0; i < n; ++i) {
        // Print the value using the pointer
        printf("%d ", *arrPtr[i]);
    }

    // Deallocate the memory for each element
    for (int i = 0; i < n; ++i) {
        free(arrPtr[i]);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
