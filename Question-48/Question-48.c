// Write a program to find reverse of a string (without inbuilt functions)

#include <stdio.h>

// Function to find the length of a string
int findStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse a string
void reverseString(char str[]) {
    int length = findStringLength(str);
    int start = 0;
    int end = length - 1;

    // Swap characters from start to end until the midpoint is reached
    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices toward the center
        start++;
        end--;
    }
}

int main() {
    // Declare variables
    char inputString[100];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to find the reverse of a string without using inbuilt functions.\n\n");

    // Input a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Call the function to reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("\nReversed string: %s", inputString);

    printf("\n\n<--- End of Code --->");

    return 0;
}
