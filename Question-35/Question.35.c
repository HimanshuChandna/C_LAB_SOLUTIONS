// Program to find factorial of a number using function and return its value in the calling function

#include <stdio.h>

// Function to calculate factorial
int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * calculateFactorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    // Declare variables for user input and result
    int num;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to calculate factorial of a non-negative integer using recursion.\n\n");
    printf("Enter a non-negative integerls: ");
    scanf("%d", &num);

    // Call the function to calculate factorial
    int factorial = calculateFactorial(num);

    // Display the result
    printf("Factorial of %d is: %d\n", num, factorial);

    printf("\n\n<--- End of Code --->");

    return 0;
}

