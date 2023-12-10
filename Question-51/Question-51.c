// Write a program to show the use of string function: strcpy(), strcat(), strcmp(), strlen(). 

#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char str1[100], str2[100], result[200];

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to show the use of string functions: strcpy(), strcat(), strcmp(), strlen().\n\n");

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Using strcpy() to copy str1 to result
    strcpy(result, str1);
    printf("\nUsing strcpy():\nCopied string: %s\n", result);

    // Using strcat() to concatenate str2 to result
    strcat(result, str2);
    printf("\nUsing strcat():\nConcatenated string: %s\n", result);

    // Using strcmp() to compare str1 and str2
    int comparisonResult = strcmp(str1, str2);
    if (comparisonResult == 0) {
        printf("\nUsing strcmp():\nThe two strings are equal.\n");
    } else if (comparisonResult < 0) {
        printf("\nUsing strcmp():\nThe first string is lexicographically smaller than the second string.\n");
    } else {
        printf("\nUsing strcmp():\nThe first string is lexicographically larger than the second string.\n");
    }

    // Using strlen() to find the length of str1
    int length = strlen(str1);
    printf("\nUsing strlen():\nLength of the first string: %d\n", length);

    printf("\n\n<--- End of Code --->");

    return 0;
}
