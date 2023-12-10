// Write a program to read character array using getchar() in do-while loop and print it. Find its length and number of vowels (Case-sensitive)

#include <stdio.h>

int main() {
    // Declare variables
    char charArray[100];
    int length = 0, vowelsCount = 0;
    char currentChar;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to read a character array using getchar() in a do-while loop,\n");
    printf("print it, find its length, and count the number of vowels (Case-sensitive).\n\n");

    // Input character array using getchar() in a do-while loop
    printf("Enter a character array (Ctrl+D to stop input):\n");
    do {
        currentChar = getchar();

        // Check if the character is not EOF (Ctrl+D) and not a newline character
        if (currentChar != EOF && currentChar != '\n') {
            charArray[length] = currentChar;
            length++;

            // Check if the current character is a vowel (case-sensitive)
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' ||
                currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U') {
                vowelsCount++;
            }
        }
    } while (currentChar != EOF && currentChar != '\n');

    // Print the entered character array
    printf("\nEntered character array: ");
    for (int i = 0; i < length; ++i) {
        printf("%c", charArray[i]);
    }

    // Print the length of the character array
    printf("\nLength of the character array: %d", length);

    // Print the number of vowels in the character array
    printf("\nNumber of vowels (case-sensitive): %d", vowelsCount);

    printf("\n\n<--- End of Code --->");

    return 0;
}
