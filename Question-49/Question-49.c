// Write a program to compare and concatinate two string (without inbuilt functions)

#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters until a mismatch is found or both strings end
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    // Return the difference in ASCII values if a mismatch is found, otherwise, return 0
    return str1[i] - str2[i];
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy characters from the first string to the result string
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy characters from the second string to the result string
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }

    // Add null character to the end of the result string
    result[i + j] = '\0';
}

int main() {
    // Declare variables
    char str1[100], str2[100], result[200];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to compare and concatenate two strings without using inbuilt functions.\n\n");

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the function to compare the strings
    int comparisonResult = compareStrings(str1, str2);

    // Display the result of string comparison
    if (comparisonResult == 0) {
        printf("\nThe two strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("\nThe first string is lexicographically smaller than the second string.\n");
    } else {
        printf("\nThe first string is lexicographically larger than the second string.\n");
    }

    // Call the function to concatenate the strings
    concatenateStrings(str1, str2, result);

    // Display the concatenated string
    printf("\nConcatenated string: %s\n", result);

    printf("\n\n<--- End of Code --->");

    return 0;
}
