//  Program to display usage of static variables4

#include <stdio.h>

// Function to demonstrate static variables
void StaticVariable() {
    // Declare a static variable
    static int staticVar = 0;

    // Increment the static variable
    staticVar++;

    // Print the value of the static variable
    printf("Static Variable: %d\n", staticVar);
}

int main() {
    // Declare variables for user input and result

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to demonstrate static variables.\n\n");

    // Call the function multiple times to see the behavior of the static variable
    printf("Calling StaticVariable() for the first time:\n");
    StaticVariable();

    printf("Calling StaticVariable() for the second time:\n");
    StaticVariable();

    printf("Calling StaticVariable() for the third time:\n");
    StaticVariable();

    printf("\n\n<--- End of Code --->");

    return 0;
}

