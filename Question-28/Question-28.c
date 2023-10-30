//  Write a program to read an integer and print sum of its digits using while loop. Construct and print reverse on n-digit number using do-while loop.


#include <stdio.h>

int main() {
    
    // Assigning the variables
    int num, original_num, sum = 0, digit, reversed_num = 0;

    printf("Name-Himanshu Chandna, Class-1B\n\n");

    printf("Write a program to read an integer and print sum of its digits using while loop. Construct and print reverse on n-digit number using do-while loop.\n\n");

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num); //Taking input from the user

    // Store the original number for reversing
    original_num = num;

    // Calculate the sum of digits using a while loop
    while (num > 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;         // Remove the last digit
    }

    // Construct and print the reverse of the number using a do-while loop
    do {
        digit = original_num % 10;    // Extract the last digit of the original number
        reversed_num = reversed_num * 10 + digit;  // Append the digit to the reversed number
        original_num /= 10;           // Remove the last digit
    } while (original_num > 0);

    printf("Sum of digits: %d\n", sum);
    printf("Reverse of the number: %d\n", reversed_num);

    printf("\n\n<--- End of Code --->");

    return 0;
}