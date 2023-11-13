// Program to find factorial of a number using recursion

#include <stdio.h>

// Function to calculate factorial using recursion
int calculateFactorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    // Declare variables for user input and result
    int num;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to calculate factorial of a non-negative integer using recursion.\n\n");
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Call the function to calculate factorial using recursion
    int factorial = calculateFactorial(num);

    // Display the result
    printf("Factorial of %d is: %d\n", num, factorial);

    printf("\n\n<--- End of Code --->");

    return 0;
}

