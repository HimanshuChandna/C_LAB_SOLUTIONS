// Write a program to copy a string to another string (without inbuilt functions)

#include <stdio.h>

// Function to copy a string to another string
void copyString(char source[], char destination[]) {
    int i = 0;

    // Copy characters from the source string to the destination string
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null character to the end of the destination string
    destination[i] = '\0';
}

int main() {
    // Declare variables
    char sourceString[100], destinationString[100];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to copy a string to another string without using inbuilt functions.\n\n");

    // Input a string
    printf("Enter a string to copy: ");
    scanf("%s", sourceString);

    // Call the function to copy the string
    copyString(sourceString, destinationString);

    // Display the copied string
    printf("\nCopied string: %s\n", destinationString);

    printf("\n\n<--- End of Code --->");

    return 0;
}
