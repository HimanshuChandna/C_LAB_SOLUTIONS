// To determine if given number is prime or composite

#include <stdio.h>

int main() {
    // Declare variables for the number and a flag for prime status
    int num, isPrime = 1;

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("To determine if a given number is prime or composite.\n\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        // Check if the entered number is less than or equal to 1
        printf("%d is not a prime number.\n", num);
    } else {
        // Loop to check for divisors from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If a divisor is found, set the flag to indicate the number is not prime
                break; // Break out of the loop since we already found a divisor
            }
        }

        // Check the flag to determine if the number is prime or composite
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is a composite number.\n", num);
        }
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}
