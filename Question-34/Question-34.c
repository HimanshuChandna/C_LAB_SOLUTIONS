// Program to swap two numbers using functions (call by reference)

#include <stdio.h>

// Function to swap two numbers using call by reference
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Declare variables for user input
    int num1, num2;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to swap two numbers using call by reference.\n\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap numbers
    swapNumbers(&num1, &num2);

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    printf("\n\n<--- End of Code --->");

    return 0;
}

