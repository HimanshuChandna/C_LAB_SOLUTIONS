// Write a program to find if a given string is palindrome or not.

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Check characters from start to end until the midpoint is reached
    while (start < end) {
        // If characters at start and end indices are not equal, it's not a palindrome
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }

        // Move indices toward the center
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    // Declare variables
    char inputString[100];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to find if a given string is a palindrome or not.\n\n");

    // Input a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check if the string is a palindrome
    if (isPalindrome(inputString)) {
        printf("\nThe given string \"%s\" is a palindrome.\n", inputString);
    } else {
        printf("\nThe given string \"%s\" is not a palindrome.\n", inputString);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
