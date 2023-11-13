// To read a number and check if it is odd or even (if-else)

#include <stdio.h>

int main() {
    // Declare variables for user input

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to check if an integer is odd or even.\n\n");
    
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}

