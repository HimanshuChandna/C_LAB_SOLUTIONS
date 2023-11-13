// Program to find all 3-digit Armstrong numbers

#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the cubes of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is Armstrong
    return (result == num);
}

int main() {
    // Declare variables for user input

    // Input from the user
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to find and display 3-digit Armstrong numbers.\n\n");

    printf("3-digit Armstrong numbers:\n");

    // Loop through all 3-digit numbers and check if they are Armstrong
    for (int i = 100; i <= 999; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    printf("\n\n<--- End of Code --->");

    return 0;
}

