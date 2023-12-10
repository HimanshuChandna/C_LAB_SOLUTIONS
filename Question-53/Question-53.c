// Write a program to define pointer variables for int, char and float. Print their values (using *) and addresses using pointer.

#include <stdio.h>

int main() {
    // Declare variables
    int integerVar = 10;
    char charVar = 'A';
    float floatVar = 3.14;

    // Declare pointer variables
    int *intPtr;
    char *charPtr;
    float *floatPtr;

    // Assign addresses of variables to pointers
    intPtr = &integerVar;
    charPtr = &charVar;
    floatPtr = &floatVar;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to define pointer variables for int, char, and float.\n");
    printf("Print their values using * and addresses using pointers.\n\n");

    // Print values and addresses using pointers
    printf("Integer Variable:\n");
    printf("Value: %d\n", *intPtr);      // Dereference intPtr to get the value
    printf("Address: %p\n", (void *)intPtr); // Use %p to print address, cast to void* for compatibility

    printf("\nCharacter Variable:\n");
    printf("Value: %c\n", *charPtr);     // Dereference charPtr to get the value
    printf("Address: %p\n", (void *)charPtr);

    printf("\nFloat Variable:\n");
    printf("Value: %.2f\n", *floatPtr);  // Dereference floatPtr to get the value
    printf("Address: %p\n", (void *)floatPtr);

    printf("\n\n<--- End of Code --->");

    return 0;
}
