// Write a program to find length of string using pointers.

#include <stdio.h>

// Function to find the length of a string using pointers
int findStringLength(char *str) {
    int length = 0;

    // Iterate through the string using pointers until the null character is encountered
    while (*str != '\0') {
        length++;
        str++; // Move the pointer to the next character
    }

    return length;
}

int main() {
    // Declare variables
    char inputString[100];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to find the length of a string using pointers.\n\n");

    // Input a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Call the function to find the length using pointers
    int length = findStringLength(inputString);

    // Display the length of the string
    printf("\nLength of the string: %d\n", length);

    printf("\n\n<--- End of Code --->");

    return 0;
}
