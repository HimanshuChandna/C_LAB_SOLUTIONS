// To print sum of first n odd natural numbers

#include <stdio.h>

int main() {
    // Declare variables for user input and sum
    int n, sum = 0;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Calculate the sum of the first n odd natural numbers.\n\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd natural numbers
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1); // Formula for the ith odd natural number is 2i - 1
    }

    // Print the sum
    printf("Sum of the first %d odd natural numbers is: %d\n", n, sum);

    printf("\n\n<--- End of Code --->");

    return 0;
}

