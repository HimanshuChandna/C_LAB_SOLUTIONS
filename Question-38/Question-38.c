// Program to display Fibonacci series using recursion

#include <stdio.h>

// Function to calculate and print the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: Fibonacci of 0 and 1 is the number itself
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to display the Fibonacci series up to the nth term
void displayFibonacciSeries(int n) {
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to display the Fibonacci series up to the nth term using recursion.\n\n");

    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    // Declare variables for user input

    // Input from the user
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Display the Fibonacci series using recursion
    displayFibonacciSeries(terms);

    printf("\n\n<--- End of Code --->");

    return 0;
}
