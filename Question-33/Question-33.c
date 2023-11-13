// program to find simple interest in a function. Create function with arguments and return type

#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    // Declare variables for user input and result
    float principal, rate, time;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to calculate simple interest.\n\n");
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Call the function to calculate simple interest
    float interest = calculateSimpleInterest(principal, rate, time);

    // Display the result
    printf("Simple Interest: %.2f\n", interest);

    printf("\n\n<--- End of Code --->");

    return 0;
}

