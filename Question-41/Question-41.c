// To Check whether the given 4 digit no. is a palindrome.

#include <stdio.h>

int main() {
    // Declare variables for user input
    int number, originalNumber, reverseNumber = 0, remainder;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to check if a 4-digit number is a palindrome.\n\n");
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // Store the original number for comparison later
    originalNumber = number;

    // Reverse the digits of the number
    while (number != 0) {
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reverseNumber && originalNumber >= 1000 && originalNumber <= 9999) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome or not a 4-digit number.\n", originalNumber);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
